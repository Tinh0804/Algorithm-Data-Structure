#include <iostream>
using namespace std;
int gt(int a)
{       int m; 
     	m=a*gt(a-1);
     	return m;
}
int main()
{
	 int m,n,s;
     
     cout<<"nhap so gia thua:";
     cin>>n;
     for (int i=1;i<=n;i++)
     {
     	s=s+gt(i);
     }
     cout<<"Tong can tinh la:"<<s<<endl;
}

