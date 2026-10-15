#include <iostream>
using namespace std;

void hoanvi(int *a,int *b)
{
	int tam=*a;
	*a=*b;
	*b=tam;
	cout<<"a="<<*a<<endl;
	cout<<"b="<<*b<<endl;
}
int main()
{
   int m,n;
   cout<<"nhap so a=";
   cin>>m;
   cout<<"nhap b=";
   cin>>n;
   hoanvi(&m,&n);
}

