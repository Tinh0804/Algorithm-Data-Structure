#include <iostream>
#include <vector>
using namespace std;

void Merge(int a[],int l,int m,int r)
{
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i=0;int j=0;
    while (i<x.size() && j<y.size())
    {
        if(x[i]<=y[j]){
            a[l]=x[i];
            l++;
            i++;
        }
        else
        {
            a[l]=y[j];
            l++;
            j++;
        } 
    }
    while (i<x.size())
        {
            a[l]=x[i];
            l++;
            i++;
        }
    while (j<y.size())
        {
            a[l]=y[j];
            l++;
            j++;
        }
    
}
void MergeSort(int a[],int l,int r)
{
    if(l>=r)
      return;
    int m=(l+r)/2;
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    Merge(a,l,m,r);
}
int main()
{

    int a[10]={1,5,2,8,5,0,6,4,3,9};
    // srand(time(NULL));
    // for(int i=0;i<n;i++)
    //   a[i]=rand()%20;
    MergeSort(a,0,10-1);
    for(int x:a)
        cout<<x<<" ";

}