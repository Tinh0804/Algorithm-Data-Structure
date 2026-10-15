#include <iostream>
using namespace std;

//so hoan hao chi co 4 so:6,28,496,8128:
int shh(int a)
{   int s=0;
	for (int i=1;i<a;i++)
	{
		if (a%i==0)
		  s+=i; 
	}
	return s;
}
int main()
{
  int i=0,n,j=0;
  cout<<"ban muon in ra bao nhieu so hoan hao:";
  cin>>n;
  while (i<n)
  {
  	j+=1;
  	if (shh(j)==j)
  	 {
  	  i+=1;
  	  cout<<j<<" "<<endl;
     }
  } 
  
}

