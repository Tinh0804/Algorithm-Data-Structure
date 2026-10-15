// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>
#include <queue>


using namespace std;
int n,m,t,s;
vector<pair<int,int> > v[101];

/*
6 8 1
1 2 7
1 3 12
2 3 2 
2 4 9
3 5 10
4 6 1
5 4 4 
5 6 5*/
void nhap()
{
	cin>>n>>m>>t>>s;
	for(int i=0;i<m;i++)
	{
		int x,y,w;//w la trong so
		cin>>x>>y>>w;
		v[x].push_back({y,w});
		v[y].push_back({x,w});
	}
}
int previous[101];
void Dijstra(int t,int s)
{
	//Khởi tạo vector vô cùng
	vector<long long> d(n+1,1e9);
	vector<bool> visited(n+1,false);
	d[t]=0;//Phần tử bắt đầu cho bằng 0
	previous[t]=t;
	priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > Q;
	//{khoảng cách,đỉnh}
	Q.push({0,t});
	while(!Q.empty())
	{
		//Chọn ra đỉnh có khoảng cách từ s nhỏ nhất
		pair<int,int> st=Q.top();
		Q.pop();
		int u=st.second;//Đỉnh đang xét
		int kc=st.first;//Khoảng cách đỉnh đang xét
		if(visited[u])
		  continue;
		visited[u]=true;
		//Cập nhật khoảng cách từ s cho tới mọi đỉnh kề với u
		for(auto it:v[u])
		{
			int h=it.first;//Đỉnh kề
			int k=it.second;//Khoảng cách 2 đỉnh
			if(d[h]>d[u]+k)//kiểm tra kc đỉnh kề tại có > đỉnh u +kc u->đỉnh kề
			{
				d[h]=d[u]+k;
				Q.push({d[h],h});
				previous[h]=u;//truoc v la u
			}
		}
	}
//	for(int i=1;i<=n;i++)
//	   cout<<d[i]<<" ";
    cout<<d[s]<<endl;
    vector<int> path;
    //truy vet
    while(1)
    {
    	path.push_back(s);
    	if(t==s)
    	  break;
    	s=previous[s];
	}
	reverse(path.begin(),path.end());
	for(auto x:path)
	  cout<<x<<" ";
}
int main()
{
   nhap();
   Dijstra(t,s);
}
