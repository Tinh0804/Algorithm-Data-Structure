#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//Algorithm function in STL
//-min
//-max
//-min_element
//-max_element
//-accumulate
//-swap
//-sort
//-stable_sort
//-find
//-binary_search
//-lower-bound
//-upper-bound
//-fill
//-merge
//-reverse
//-set_union
//-set_intersection
//-set_difference
//-set_symmetric_difference

int main()
{
	 int a[5]={5,3,7,1,2};
	 int b=5,c=6;
	 vector<int> v;
	 v.push_back(5);
	 v.push_back(4);
	 v.push_back(7);
	 v.push_back(1);
     cout<<max(10,20)<<endl;
     cout<<min(4,2)<<endl;
     cout<<*min_element(a,a+5)<<endl;//tra ve gia tri con tro
     cout<<*max_element(v.begin(),v.end())<<endl;
     cout<<accumulate(a,a+5,0)<<endl;;//tinh tong phan tu trong mang
     sort(a,a+5);
     for (int i=0;i<5;i++)
        cout<<a[i]<<" ";
     sort(v.begin(),v.end(),greater<int>());
     cout<<endl;
     for (vector<int>::iterator j=v.begin();j!=v.end();j++)
        cout<<*j<<" ";
     swap(b,c);
     cout<<endl;
     cout<<"b="<<b<<endl;;
     cout<<"c="<<c<<endl;;
     cout<<find(a,a+5,5)<<endl;//tra ve dia chi cua gia tri tim thay
     
}

