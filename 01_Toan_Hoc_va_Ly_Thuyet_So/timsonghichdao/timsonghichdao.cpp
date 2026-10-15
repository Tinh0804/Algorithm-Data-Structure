#include <iostream>
using namespace std;

int main()
{
     int n,tam,dao;
     cout<<"Nhap so n:";
     cin>>n;
     tam=n;
     dao=0;
     while (n>0)
     {
     	dao=dao*10+n%10;
     	n/=10;
    
     }
     if (tam==dao)
     {
     	cout<<tam<<" la so thuan nghich ";
     }
     else
     {
     	cout<<tam<<" khong phai la so thuan nghich";
     }
     
     
}

