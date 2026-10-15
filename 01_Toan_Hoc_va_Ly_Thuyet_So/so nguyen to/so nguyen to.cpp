#include <iostream>
using namespace std;
#include <math.h>
#include <cmath>
#include <iomanip>

int snt(int a)
{
	if (a<=1)
	  return false;
	if (a>2 and a<4)
	  return true;
	for (int i=2;round(sqrt(a));)
	{ 
	   if (a%i==0)
	      return false;
	}
	return true;
}
int main()
{
	int n,i=0,j=0;
	cout<<"nhap so luong so nguyen to:";
	cin>>n;
	while (i<n)
	{
		j+=1;
		if (snt(j))
		{
			i+=1;
			cout<<j<<" ";
		}
	}


}

