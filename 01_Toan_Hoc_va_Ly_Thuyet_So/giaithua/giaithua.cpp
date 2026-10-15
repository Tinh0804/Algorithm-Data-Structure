#include <iostream>
using namespace std;

int giaithua(int n)
{
	if (n<=1)
	  return 1;
	if (n>=2)
	  return n*giaithua(n-1);
}
int main()
{
	 int a;
     cout<<"nhap so giai thua can tinh:";
     cin>>a;
     cout<<a<<"!="<<giaithua(a)<<endl;
}

