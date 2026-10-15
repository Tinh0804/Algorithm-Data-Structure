#include <iostream>
using namespace std;
int n,q,a[2000000],BIT[2000000];

void update(int pos,int val){
    for(;pos<=n;pos+=pos & (-pos)){
        BIT[pos]+=val;
    }
}

//truy van:tinh tong cac phan tu tu chi so 1=>pos trong mang A[]
int query(int pos){
    int sum=0;
    for(;pos>=1;pos-=pos & (-pos)){
        sum+=BIT[pos];
    }
    return sum;
}
//Tăng phần tử tại vị trí u lên v đơn vị
//Tính tổng các phần tử trong đoank [l,r]
//1 uv hoặc 2 [l,r]
// 6 8
// 10 3 2 3 10 5
// 2 2 5
// 1 2 9
// 2 3 6
// 2 1 3
// 2 3 5
// 1 5 7
// 1 3 8
// 2 1 3
//ket qua
// 18
// 20
// 24
// 15
// 32
int main(){
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        update(i,a[i]);
    }
    while(q--){
        int tt,x,y;
        cin>>tt>>x>>y;
        if(tt==1)
            update(x,y);
        else
            cout<<query(y)-query(x-1)<<endl;
    }
}