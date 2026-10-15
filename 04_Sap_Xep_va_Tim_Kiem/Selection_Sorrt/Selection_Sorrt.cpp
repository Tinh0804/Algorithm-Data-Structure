#include <iostream>
using namespace std;


void SelectionSort(int a[], int n){
    int i,j ,min,tam;
    for (i = 0; i < n-1; i++) {
    	min=i;
        for (j = i+1; j < n; j++){
            if (a[j] < a[min])
			     min = j;
        }
        tam=a[i];
        a[i]=a[min];
        a[min]=tam;
    }
    for (int i=0;i<n;i++)
    {
    	cout<<a[i]<<" ";
    }
}
int main()
{
   int mang[]={1,5,3,7,1,10,6};
   SelectionSort(mang,sizeof(mang)/sizeof(int));
}

