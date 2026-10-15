#include <bits/stdc++.h>

using namespace std;
int ucln(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		  a-=b;
		else
		  b-=a;
	}
	return a;
}
class Phanso
{
	private:
		int tu,mau;
	public:
	    Phanso(int tu,int mau);
		friend istream&operator>>(istream&in,Phanso &a);
		friend ostream&operator<<(ostream&out,Phanso a);
//		void Phanso();
		friend Phanso operator+(Phanso a,Phanso b);
};
istream&operator>>(istream&in,Phanso &a)
{
	in>>a.tu>>a.mau;
	return in;
}
ostream&operator<<(ostream&out,Phanso a)
{
	out<<a.tu<<"/"<<a.mau;
	return out;
}
Phanso::Phanso(int tu,int mau)
{
	this->tu=tu;
	this->mau=mau;
}
Phanso operator+(Phanso a,Phanso b)
{
	Phanso tong(1,1);
	tong.tu=a.tu*b.mau+b.tu*a.mau;
	tong.mau=a.mau*b.mau;
	int g=ucln(tong.tu,tong.mau);
	tong.tu/=g;
	tong.mau/=g;
	return tong;
}
int main()
{
  Phanso a(1,1),b(1,1);
  cin>>a>>b;
//  a.Phanso();
  cout<<a+b;
}

