#include <iostream>
#include <string.h>
#include <sstream>
#include <algorithm>
using namespace std;

class NguoiChoi
{
    private: string user,pass,ten,giovao,giora;
             int gio,phut;

    public:
       
        void Time()
        {
            int phutvao1,giovao1,phutra2,giora2;

            giovao1=stoi(this->giovao.substr(0,2));
            phutvao1=stoi(this->giovao.substr(3));

            giora2=stoi(this->giora.substr(0,2));
            phutra2=stoi(this->giora.substr(3));

            if(phutra2>=phutvao1)
            {
                this->phut=phutra2-phutvao1;
                this->gio=giora2-giovao1;
            }
            else
            {
               this->phut=phutra2+60-phutvao1;
               this->gio=giora2-giovao1-1;
            }
        }
         void nhap()
         {
            getline(cin,this->user);
            getline(cin,this->pass);
            getline(cin,this->ten);
            getline(cin,this->giovao);
            getline(cin,this->giora);
            
            Time();        
        }
        int getTime()
        {
            return this->gio*60+this->phut;
        }
        string getUser()
        {
                return this->user;
        }
        void in()
        {
            cout<<this->user<<" "<<this->pass<<" "<<this->ten<<" "<<this->gio<<" gio "<<this->phut<<" phut"<<endl;

        }
        
// 5
// anhtuanvip
// 123
// Nguyen Van Tuan
// 05:18
// 07:06
// chickenzero
// 124
// Nguyen Van Phuc
// 05:38
// 14:19
// anhhung123
// matkhau
// Nguyen manh Hung
// 06:58
// 14:18
// loveyou
// acb
// Luong Van Manh
// 02:01
// 06:47
// taikhoan123
// matkhaumanh
// Nguyen Thi Uyen
// 00:09
// 06:19
};
bool cmp(NguoiChoi a,NguoiChoi b)
{
    if(a.getTime()==b.getTime())
       return a.getUser()<b.getUser();
    return a.getTime()>b.getTime();
}
int main()
{
  int n;
  cin>>n;
  NguoiChoi a[n];
  cin.ignore();
  for(int i=0;i<n;i++)
    a[i].nhap();
  sort(a,a+n,cmp);
  for(int i=0;i<n;i++)
    a[i].in();
}