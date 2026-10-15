#include <iostream>

int maxn=2000000;
int n,a[maxn],t[maxn*4];

void build(int v,int l,int r){
    //v:số thứ tự ta đang xét
    if(l == r)
        t[v]=a[l];//l==r:node la
    else
    {
        int m=(l+r)/2;
        build(2*v,l,m);
        build(2*v+1,m+1,r);
        t[v]=t[2*v]+t[2*v+1];
    }
}
int main(){

}