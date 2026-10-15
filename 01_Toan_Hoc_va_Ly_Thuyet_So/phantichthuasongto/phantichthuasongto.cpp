#include <iostream>
using namespace std;
int tong(int n)
{
	int s=0;
	while (n>0)
	{
		s+=n%10;
		n/=10;
	}
	return s;
}

void phantichthuasongto(int m)
{
	int i=2;
	cout<<m<<"=";
	while (m!=1)
	{
		if (m%i==0)
		{
			if (m==i)
			{
				cout<<i<<endl;
			}
			else
			{
				cout<<i<<"x";
			}
			m/=i;
		}
		else
		  i++;
	}
}
int main()
{
   int n;
   cout<<"nhap so duong n:";
   cin>>n;
   cout<<"tong chu so la:"<<tong(n)<<endl;
   phantichthuasongto(n);
}

