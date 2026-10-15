#include <iostream>
using namespace std;

void ss(int a[],int n)
{
	int tam;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				tam=a[j];
				a[j]=a[j+1];
				a[j+1]=tam;
			}
		}
	}
	cout<<"mang sau khi sap xep la:"<<endl;
	for (int i=0;i<n;i++)
	   cout<<a[i]<<" ";
	cout<<endl;
	int d=0,t;
	for (int i=0;i<n;i++)
	{
		if (a[i]=a[i+1])
		  d++;
	}
	t=n-(d*2);
	cout<<"so gia tri khac nhau trong mang la:"<<t<<endl;
	cout<<d<<endl;
}

int main()
{
    int b[]={6,1,10,6,10,5,9,1,3,8,6,4,5};
    ss(b,sizeof(b)/sizeof(int));
    cout<<endl;

}

