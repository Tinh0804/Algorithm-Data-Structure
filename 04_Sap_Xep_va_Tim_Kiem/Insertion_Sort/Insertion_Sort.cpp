#include <iostream>
using namespace std;

void chen(int a[], int n)
{
    int i, j, tam;
    for (i=1; i < n; i++) 
	{
        tam = a[i];
        j = i;
        while ((j > 0) && (a[j-1] >tam))
	    {
            a[j] = a[j-1];
            j = j - 1;
	    }
         a[j] = tam;
    }
    for (int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }
};
int main()
{
     int mang[]={1,6,3,4,2,1,10,8};
     chen(mang,sizeof(mang)/sizeof(int));
}


