#include <iostream>
using namespace std;

bool songhichdao(int n)
{
	int dao=0,m=n;
	while (n>0)
	{
		dao=dao*10+n%10;
		n/=10;
	}
	return dao==m;
}
bool chiahetchoK(int m,int k)
{
	int s=0;
	while( m>0)
	{
		s+=m%10;
		m/=10;
	}
	return s%k==0;
}
int main()
{
  int k;
  cout<<"Nhap k:";
  cin>>k;
  cout<<"So nghich dao chia het cho "<<k<<"la:\n";
  for (int i=10000000;i<=99999999;i++)
  {
   if (songhichdao(i) &&(chiahetchoK(i,k)))
   {
  	  cout<<i<<" ";
   }  
  }
}

