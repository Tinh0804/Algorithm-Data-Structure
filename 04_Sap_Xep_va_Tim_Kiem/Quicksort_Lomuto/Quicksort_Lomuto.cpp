#include <iostream>
#include <algorithm>
using namespace std;
//Hoare
//Lomuto
int partition(int a[],int l,int r)
{
	int pivot=a[r];//phan tu ben phai cung
	int i=l-1;
	for (int j=l;j<r;j++)
	{
		if (a[j]<=pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	//dua ve chot giua
	i++;
	swap(a[i],a[r]);
	return i;//vi tri
}
void quicksort(int a[],int l,int r)
{
	if (l>=r) 
	  return;
	int p=partition(a,l,r);
	quicksort(a,l,p-1);
	quicksort(a,p+1,r);
}
int main()
{
   int a[100],n;
   cin>>n;
   for (int i=0;i<n;i++)
      a[i]=rand()%100;
   quicksort(a,0,n-1);
   for (int i=0;i<n;i++)
     cout<<a[i]<<" ";
}

