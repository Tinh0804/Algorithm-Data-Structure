#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool ktsl(int a,int b)
{
	int n1,n2,d1,d2;
	d1=0,d2=0;
	while(a>0)
	{
		n1=a%10;
		if(n1%2!=0)
		   d1+=1;
		a=a/10;
	}
	while(b>0)
	{
		n2=b%10;
		if (n2%2!=0)
		   d2+=1;
		b=b/10;
	}
	if (d1!=d2)
	    return d1<d2;
	else
	{
		return a<b;
	}
}
int main()
{
   int a[11]={4456,10493,23600,32757,6911,15236,14074,22458,32132,28596,15209};
   stable_sort(a,a+11,ktsl);
   //luu y:sort sap xep theo vi tri khong xac dinh
   //stable_sort sap xep theo vi tri xac dinh,phan tu nao xuat hien truoc thi duoc in ra truoc,hoac trong 2 phan tu giong nhau thi no van giu duoc vi tri ban dau cua no
   cout<<"sau khi sap xep:"<<endl;
   for (int i=0;i<11;i++)
      cout<<a[i]<<" ";
}

