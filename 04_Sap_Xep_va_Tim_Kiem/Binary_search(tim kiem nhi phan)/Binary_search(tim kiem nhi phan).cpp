#include <iostream>
using namespace std;

void insert(int a[],int n)
{
	int tam,i,j;
	for (int i=1;i<n;i++)
	{
		j=i;
		while (j>0 && a[j-1]>a[j])
		{
			tam=a[j];
			a[j]=a[j-1];
			a[j-1]=tam;
			j-=1;
		}
	}
}
int binary_search(int a[],int n,int x)
{
	int mid;
	int left=0,right=n-1;
	while (left<=right)
	{
		mid=(left+right)/2;
		if (a[mid]==x)
		{
		    return mid;
		}
		if (a[mid]>x)
		{
		    right=mid-1;
		}
		else
		    left=mid+1;
	}
	return -1;
}
int main()
{
    int mang[]={10,5,8,1,7,2,11,4,0,3,9,6};
    int x,c;
    insert(mang,sizeof(mang)/sizeof(int));
    cout<<"Nhap so can tim kiem:";
    cin>>x;
    c=binary_search(mang,sizeof(mang)/sizeof(int),x);
    if (c!=-1)
    {
    	cout<<"\nPhan tu "<<x<<" nam o a["<<c<<"]";
    }
    else
    {
    	cout<<"\nPhan tu "<<x<<" khong nam trong mang";
    }
    
}

