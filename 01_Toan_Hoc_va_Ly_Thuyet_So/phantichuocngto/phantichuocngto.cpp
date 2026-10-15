#include <iostream>
#include <cmath>
using namespace std;

bool snt(int n)
{
	if (n<2) 
	   return false;
	if ((n>2) and (n<4))
	   return true;
	for (int i=2;i<sqrt(round(n));i++)
	{
		if (n%i==0)
		  return false;
	}
	return true;
}
void cacuocnguyento(int n)
{
	cout<<"CAC UOC NGUYEN TO:"<<endl;
	for (int i=0;i<=n;i++)
	{
		if (n%(snt(i))==0)
				cout<<i<<" ";
	}
}
void cacuockhongnguyento(int n)
{
	cout<<"CAC UOC KHONG NGUYEN TO:"<<endl;
	for (int i=1;i<n;i++)
	{
		if (snt(i)==false && n%(snt(i))==0)
		{
			
			cout<<i<<" ";
		}
	}
}
int main()
{
   int n;
   cout<<"Nhap vao gia tri duong n:";
   cin>>n;
   cacuockhongnguyento(n);
   cout<<endl;
   cacuocnguyento(n);
}

