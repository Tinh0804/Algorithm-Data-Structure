#include <iostream>
#include <random>
using namespace std;
int n;
void inDS(int a[], int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int partition(int a[],int l,int r)
{
	int pivot=a[l];
	int i=l-1;
	int j=r+1;
	while (1)
	{
		do
		{
			i++;
		}while (a[i]<pivot);
		do
		{
			j--;
		}while(a[j]>pivot);
		if(i<j)
		{
			swap(a[i],a[j]);
			inDS(a,n);
		}
		else
		    return j;
	}
}
void quicksort(int a[],int l,int r)
{
	if (l>=r)
	  return ;
	int p=partition(a,l,r);
	quicksort(a,l,p);
	quicksort(a,p+1,r);
}
int main()
{
  int a[1000];
  cin>>n;
//   srand(time(NULL));
  for (int i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  quicksort(a,0,n-1);
  for (int i=0;i<n;i++)
     cout<<a[i]<<" ";
  
}

