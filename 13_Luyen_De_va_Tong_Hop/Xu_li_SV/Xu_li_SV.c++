#include <iostream>
#include <string.h>
#include <sstream>
#include <iomanip>
#include <algorithm>

using namespace std;
// 2
// ngUYen Van NaM
// CNTT1
// 2/12/1994
// 2.17
// Nguyen QuanG hAi
// CNTT2
// 1/9/1994
// 3.0
class SinhVien
{
    private:
      string ma,ten,lop,ngaysinh;
      double gpa;
    public:
      void nhap(int stt)
      {
         cin.ignore();
         string ma1=to_string(stt);
         while(ma1.size()<3)
         {
            ma1="0"+ma1;
         }
         this->ma="SV"+ma1;
         getline(cin,this->ten);
         getline(cin,this->lop);
         getline(cin,this->ngaysinh);
         cin>>this->gpa;
      }
      void in()
      {
        cout<<this->ma<<" "<<this->ten<<" "<<this->lop<<" "<<this->ngaysinh<<fixed<<setprecision(2)<<" "<<this->gpa<<endl;
      }
      void chuanhoa()
      {
         string res="";
         string tmp;
         stringstream ss(this->ten);
         while(ss>>tmp)
         {
              res+=toupper(tmp[0]);
              for(int i=1;i<tmp.size();i++)
                res+=tolower(tmp[i]);
              res+=" ";
         }
         res.pop_back();
         this->ten=res;
         if(this->ngaysinh[1]=='/')
           this->ngaysinh="0"+this->ngaysinh;
         if(this->ngaysinh[4]=='/')
           this->ngaysinh=this->ngaysinh.insert(3,"0");
      }
      double getGpa()
      {
         return this->gpa;
      }
      string getMa()
      {
        return this->ma;
      }
};
bool cmp(SinhVien a,SinhVien b)
{
    if(a.getGpa()!=b.getGpa())
      return a.getGpa()>b.getGpa();
    else
      return a.getMa()>b.getMa();
}
int main()
{
   int n;
   cin>>n;
   SinhVien a[n];
   for(int i=0;i<n;i++)
   {
        a[i].nhap(i+1);
        a[i].chuanhoa();

   }
   sort(a,a+n,cmp);
   for(int i=0;i<n;i++)
     a[i].in();
}