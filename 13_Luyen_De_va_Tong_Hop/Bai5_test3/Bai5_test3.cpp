#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;
// 5
// NV-0001
// Vu Phuong Minh
// 16/10/1979
// 24
// 167000
// NV-0002
// Nguyen Hong Hai
// 23/11/1975
// 22
// 236000
// GD-0003
// Nguyen Hong Hai
// 14/6/1972
// 22
// 1000000
// NV-0004
// Vu Ngoc Tuan
// 9/11/1974
// 30
// 150000
// NV-0005
// Vu Van Hai
// 19/7/1972
// 23
// 216000
class Nhanvien
{
    private:
        string mnv,ten,ngaysinh;
        int ngaycong,luongcb;
    public:
        friend istream& operator >>(istream& in,Nhanvien &a);
        friend ostream& operator <<(ostream& out,const Nhanvien a);
    
        string get_maNV() const
        {
            return this->mnv;
        }
        string chucvu() const
        {
            string cv=this->mnv.substr(0,2);
            if(cv=="GD")
              return "Giam Doc";
            if(cv=="TP")
               return "Truong Phong";
            if(cv=="NV")
               return "Nhan Vien";
            else
               return "Pho Giam Doc";
        }
        void chuan_hoa_ngay_sinh()
        {
            if(this->ngaysinh[1]=='/')
               this->ngaysinh="0"+this->ngaysinh;
            if(this->ngaysinh[4]=='/')
               this->ngaysinh.insert(3,"0");
        }
        int luong_cung() const
        {
             return this->ngaycong*this->luongcb;
        }
        int phu_cap() const
        {
            string cv=this->mnv.substr(0,2);
            if(cv=="GD")
              return 2000000;
            if(cv=="TP")
               return 500000;
            if(cv=="NV")
               return 200000;
            else
               return 10000000;
        }
        int thuong() const
        {
            if(this->ngaycong>=27)
              return this->luong_cung()*0.2;
            if(this->ngaycong>=25)
              return this->luong_cung()*0.1;
            return 0;
        }
        int thu_nhap() const
        {
            return this->luong_cung()+this->thuong()+this->luongcb;
        }
        bool operator < (const Nhanvien other) const
        {
            if(this->thu_nhap()!=other.thu_nhap())
                return this->thu_nhap()>other.thu_nhap();
            return this->get_maNV() <other.get_maNV();
        };

};
istream& operator >>(istream& in,Nhanvien& a)
{
    in>>a.mnv;
    cin.ignore();
    getline(in,a.ten);
    in>>a.ngaysinh>>a.ngaycong>>a.luongcb;
    a.chuan_hoa_ngay_sinh();
    return in;

}
ostream& operator <<(ostream& out,const Nhanvien a)
{
    out<<a.mnv<<" "<<a.ten<<" "<<a.chucvu()<<" "<<a.ngaysinh<<" "<<a.ngaycong<<" "<<a.luongcb<<" "<<a.thu_nhap();
    return out;
}
int main()
{
  int n;
  cin>>n;
  Nhanvien a[n];
  for(int i=0;i<n;i++)
     cin>>a[i];
  sort(a,a+n);
  for(Nhanvien x:a)
     cout<<x<<endl;
}
