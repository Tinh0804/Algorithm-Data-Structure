#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    //L[i]:độ dài của dãy con tăng dài nhất kết thúc ở chỉ số i
    //L[i]=max(L[i],L[j]+1) and a[i]>a[j]
//  14
// 128 104 53 876 660 961 754 775 290 231 224 915 392 994
   int n;
   cout<<"Nhập số lượng mảng:";
   cin>>n;
   vector<int> L(n,1);
   int a[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
      for(int i=0;i<n;i++)
   {
      for(int j=0;j<i;j++)
      {
        if(a[i]>a[j])
        {
           L[i]=max(L[i],L[j]+1);
        }
      }
   }
   cout<<*max_element(L.begin(),L.end()) << endl;

}