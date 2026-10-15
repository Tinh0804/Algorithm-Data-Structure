#include <iostream>
#include <set>
using namespace std;

//Thao tác 1:Thêm phần tử X vàp mảng
//Thao tác 2:Xoá phần tử X nếu X nằm trong mảng,nếu có xoá thì chỉ xoa.1 phần tử
//Thao tác 3:Truy vấn xem phần tử X có xuất hiện trong mảng hay không
//6
//1 2 3 4 5 6
//4
//1 1
//2 6
//3 1
//3 6
 int main()
 {
    multiset<int> ms;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x, y;
        cin>>y>>x;
        if(y==1)
        {
            ms.insert(x);
        }
        else if(y==2)
        {
            auto it=ms.find(x);
            if(it!=ms.end())
              ms.erase(it);
        }
        else if(y==3)
        {
            if(ms.find(x)!=ms.end())//Tìm thấy phần tử nằm trong 
              cout<<"YES/n";
            else 
              cout<<"NO\n";
        }
    }
 }
