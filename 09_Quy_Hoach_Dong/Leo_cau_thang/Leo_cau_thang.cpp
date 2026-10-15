#include <bits/stdc++.h>

using namespace std;
//Để lên cầu thang thứ n,ta có thể thực hiện theo 2 cách
//C1:Lên tới bậc n-2 rồi bước  hai bậc
//C2:Lên tới bậc n-1 rồi bước thêm một bậc
//Số bước A(n)=A(n-2)+A(n-1);
//Mà ta có thể nhẩm được A(1)=1;A(2)=2;
//A(n) là số hạng thứ n+1 của dãy Fibonaci
int main()
{
	int n;
	cin>>n;
	int F[n+1];
	F[0]=1;
	F[1]=1;
	for(int i=2;i<=n;i++)
	{
		F[i]=F[i-1]+F[i-2];
	}
	cout<<"So buoc toi da khac nhau buoc len cau thang:"<<F[n];
	
}
