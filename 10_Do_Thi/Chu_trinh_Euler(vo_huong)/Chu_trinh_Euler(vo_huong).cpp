#include <bits/stdc++.h>

using namespace std;
vector<int> v[101];
bool visited[101];
vector<pair<int,int>> adj;
int m,n;
set<int> s[101];
int a[101];
 /*
 5 6
 1 2
 2 3
 3 1
 2 4
 4 5
 2 5
 */
 /*Đồ thị vô hướng
 Chu trình Euler:
 -Các đỉnh có bậc khác 0 của đồ thị liên thông với nhau
 -Tất cả các đỉnh của đồ thị đều có bậc chẵn
 Đường đi Euler:
 -Các đỉnh có bậc khác 0 của đồ thị liên thông với nhau
 -Đồ thị có 0 hoặc 2 đỉnh có bậc lẻ,trong trường hợp có 2 đỉnh bậc lẻ thì đường đi sẽ bắt đầu từ đỉnh bậc lẻ thứ 1 và kết thúc ở đỉnh bậc lẻ thứ 2
 *Đồ thị có hướng
 Chu trình Euler:
 -Các đỉnh có bậc khác 0 của đồ thị thuộc cùng 1 thành phần liên thông
 -Mọi đỉnh thuộc đồ thị đều có bán bậc ra bằng bán bậc vào
 Đường đi Euler:
 -Các đỉnh có bậc khác 0 của đồ thị cùng 1 thành phần liên thông
 -Tồn tại 2 đỉnh u,v mà deg+(u)-deg-(u)=1 và deg-(v)-deg+(v)=1,mọi đỉnh còn lại đều có bán bậc ra bằng bán bậc vào.Khi đó đường đi bắt đầu từ đỉnh u và kết thúc ở đỉnh v.*/
void nhap()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		s[x].insert(y);
		s[y].insert(x);
		a[x]++;
		a[y]++;
	}
}
void CT_Euler(int u)
{
	stack<int> st;
	vector<int> v;
	st.push(u);
	while(!st.empty())
	{
		int x=st.top();
		if(s[x].size()!=0)
		{
			int y=*s[x].begin();//Lấy phần tử kề đầu tiên
			st.push(y);
			//xoa(x,y);
			s[x].erase(y);
			s[y].era`se(x);
		}
		else
		{
			st.pop();
			v.push_back(x);
		}
	}
	reverse(v.begin(),v.end());
	for(auto k:v)
	   cout<<k<<" ";
}
int main()
{
   nhap();
   for(int i=1;i<=n;i++)
   {
   	   if(a[i]%2==1)
   	   {
   	       CT_Euler(i);   
   	       return 0;
	   }
   }
      
   return 0;
}
