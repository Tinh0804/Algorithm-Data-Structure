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
class Rutgon
{
	private:
		int tu,mau;
	public:
	    Rutgon(int tu,int mau);
		friend istream&operator>>(istream&in,Rutgon &a);
		friend ostream&operator<<(ostream&out,Rutgon a);
		void rutgon();
};
istream&operator>>(istream&in,Rutgon &a)
{
	in>>a.tu>>a.mau;
	return in;
}
ostream&operator<<(ostream&out,Rutgon a)
{
	out<<a.tu<<"/"<<a.mau;
	return out;
}

void Rutgon::rutgon()
{
	int g=ucln(tu,mau);
	this->tu/=g;
	this->mau/=g;
}
Rutgon::Rutgon(int tu,int mau)
{
	this->tu=tu;
	this->mau=mau;
}
int main()
{
  Rutgon a(1,1);
  cin>>a;
  a.rutgon();
  cout<<a;
  
}

