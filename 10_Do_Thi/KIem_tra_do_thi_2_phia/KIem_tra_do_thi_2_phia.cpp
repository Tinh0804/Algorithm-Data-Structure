#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int m,n;
vector<int> v[101];
int color[101];
/*
5 6
2 1
2 3
3 4
5 4
1 6*/
//Đồ thị 2 phía là đồ thị 
//không có đường đi từ các đỉnh của 1 tập hợp mà lại có đường đi từ các đỉnh của 1 tập hợp này sang các đỉnh của 1 tập hợp khác
void nhap()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(color,-1,sizeof(color));
}
bool DTLP(int u)//Đồ thị lưỡng phân:dùng BFS
{
	queue<int> q;
	q.push(u);
	color[u]=0;//0 là màu RED;1 là màu BLUE
	while(!q.empty())
	{
		int top=q.front();
		q.pop();
		for(auto x:v[top])
		{
			if(color[x]==-1)//Kiểm tra nếu chưa được tô màu
			{
				color[x]=1-color[top];
				//Hoac:color[x]=(color[top]==0)?1:0;
				q.push(x);
			}
			else if(color[x]==color[top])
			   return false;
		}
	}
	return true;
}
//bool dfs(int u,int par)
//{
//	color[u]=1-color[par];
//	for(auto x:v[u])
//	{
//		if(color[x]==-1)
//		  if(!dfs(x,u))
//		    return false;
//		else if(color[x]==color[u])
//		   return false;
//	}
//	return true;
//}
int main()
{
    nhap();
    for(int i=1;i<=n;i++)
    {
    	if(color[i]==-1)
    	{
    		if(!DTLP(i))
    		{
    		   cout<<"NO!";
    		   return 0;
    	    }
		}
	}
	cout<<"YES!\n";
	return 0;
}
