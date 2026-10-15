#include <iostream>
using namespace std;

int main()
{
   int n;
    int gt1=1;
   cout<<"Moi nhap so nguyen n:";
   cin>>n;
   //dung vong for
   for (int i1=1;i1<=n;i1++)
   {
       gt1*=i1;
       
   }
   cout<<"ket qua "<<n<<"!="<<gt1<<endl;
   //dung while
   int gt2=1,i2=1;
   
   while (i2<=n)
   {
   	  gt2*=i2;
   	  i2++;
   }
   cout<<"ket qua "<<n<<"!="<<gt2<<endl;
}

