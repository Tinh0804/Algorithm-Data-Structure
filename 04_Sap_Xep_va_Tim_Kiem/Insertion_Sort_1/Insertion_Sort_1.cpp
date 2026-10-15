#include <iostream>
using namespace std;
void insert(int a[],int n)
{
	int tam,j;
	for (int i=1;i<n;i++)
	{
	//	tam=a[i];
		j=i;
		while (j>0 && a[j-1]>a[j])
		{
			tam=a[j];
			a[j]=a[j-1];
			a[j-1]=tam;
			j-=1;
		}
	}
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
    int mang[]={10,7,5,8,2,9,10,6,3,1};
    insert(mang,sizeof(mang)/sizeof(int));
}

