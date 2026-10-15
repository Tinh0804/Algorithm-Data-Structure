#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool snt(int a)
{
	if(a<2)
	   return false;
	for(int i=2;i<(round(sqrt(a)));i++){
		if (a%i==0)
		   return false;
	}
	return true;
}
int le(int b)
{
	int d;
	d=0;
	while(b>0)
	{
		d=b%10;
		if (snt(d))
		  d+=1;
	}   b/=10;
	return d;
}
bool ktslsnt(int a,int b)
{
	if(le(a)!=le(b))
	    return le(a)<le(b);
	else
	   return a<b;
}
int main()
{
  int mang[18]={16501,5898,7388,2663,17330,15803,6865,3695,3495,20918,4244,580,29707,5410,11716,4765,12423};
  stable_sort(mang,mang+18,ktslsnt);
  cout<<"mang sau khi sap xep la:\n";
  for (int i=0;i<18;i++)
  {
  	cout<<mang[i]<<" ";
  }
}
 


