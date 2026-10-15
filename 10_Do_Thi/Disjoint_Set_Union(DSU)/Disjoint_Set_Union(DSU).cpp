#include <bits/stdc++.h>

using namespace std;
int parent[101];
int n;
int size[101];

void make_set()
{
	for(int i=1;i<=n;i++)
	{
	  parent[i]=i;
	  size[i]=1;
    }
}
//int find(int u)
//{
//	if(u==parent[u])//Dai dien cho chinh no
//	  return u;
//	else
//	   return find(parent[u]);
//}
int find(int u)
{
   if(u==parent[u])	
     return u;
   return parent[u]=find(parent[u]);//Gan cac dinh tren duong ddi co cung 1 cha
}
//void Union(int a,int b)
//{
//	a=find(a);
//	b=find(b);
//	if(a!=b)//kiem tra dai dien cua a va b
//	  parent[b]=a; //cho dai dien cua b la a:Gop
//}
void Union(int a,int b)
{
	a=find(a);
	b=find(b);
	if(a!=b)
	{
		 if(size[a]<size[b])//Kiem tra do dai cua cay nao lon hon
		 {
		   parent[a]=b;
		   size[a]+=size[b];
	     }
	     else
	     {
	     	parent[b]=a;
	     	size[b]+=size[a];
		 }
		   
	}
}
int main()
{
  
}
