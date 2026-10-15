#include <iostream>
#include <string.h>
#include <iomanip>
#include <sstream>
#include <algorithm>
using namespace std;

class SinhVien
{
   private:
    string msv,hoten,ngaysinh,lop;
    double gpa;
   public:
      void chuanhoa()
      {
         stringstream ss(this->hoten);
         string tmp,word="";
         while(ss>>tmp)
         {
            word+=toupper(tmp[0]);
            for(int i=1;i<tmp.size();i++)
              word+=tolower(tmp[i]);
            word+=" ";
         }
         word.pop_back();
         this->hoten=word;
         if(this->ngaysinh[1] == '/')
            this->ngaysinh="0"+this->ngaysinh;
         if(this->ngaysinh[4]=='/')
            this->ngaysinh.insert(3,"0");
      }
      double getGpa()
      {
         return this->gpa;
      }

      void nhap(int stt)
      {
         cin.ignore();
         string s=to_string(stt);
         while(s.size()<3)
         {
            s="0"+s;
         }
         this->msv="SV"+s;
         getline(cin,this->hoten);
         getline(cin,this->ngaysinh);
         getline(cin,this->lop);
         cin>>this->gpa;
      }
     
      void xuat()
      {
         cout<<this->msv<<" "<<this->hoten<<" "<<this->lop<<" "<<this->ngaysinh<<" "<<setprecision(2)<<fixed<<this->gpa<<endl;
      }     
};
bool cmp(SinhVien a,SinhVien b)
{
   return a.getGpa()>b.getGpa();
}
int main()
{
 int n;
 cin>>n;
 SinhVien sv[n];
 for(int i=0;i<n;i++)
    {
        sv[i].nhap(i+1);
        sv[i].chuanhoa();
    }
 sort(sv,sv+n,cmp);
 for(int i=0;i<n;i++)
    sv[i].xuat();
}