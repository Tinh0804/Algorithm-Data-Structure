#include <bits/stdc++.h>

using namespace std;
class DoanhNghiep
{
	private:
		string id,name;
		int soluong;
	public:
//		Doanhnghiep();
//		Doanhngiep(string,string,int);
		friend ostream&operator<<(ostream&xuat,DoanhNghiep a);
		friend istream&operator>>(istream&nhap,DoanhNghiep&a);
		int getsoluong(){
			return this->soluong;
		};
		
};
ostream&operator<<(ostream&xuat,DoanhNghiep a)
{
	xuat<<"\nMA:"<<a.id<<"\nTen:"<<a.name<<"\nSoluong:"<<a.soluong;
	return xuat;
}
istream&operator>>(istream&nhap,DoanhNghiep&a)
{
	nhap.ignore();
	cout<<"Nhap id:";
    getline(nhap,a.id);
	cout<<"Nhap ten:";
	getline(nhap,a.name);
	cout<<"Nhap soluong:";
	nhap>>a.soluong;
	return nhap;
}
//DoanhNghiep::DoanhNghiep()
//{
//	this->id=name="";
//	this->soluong=0;
//}
//DoanhNghiep::DoanhNghiep(string id,string name,string soluong)
//{
//	this->id=id;
//	this->name=name;
//	this->soluong=soluong;
//}
bool cmp(DoanhNghiep a,DoanhNghiep b)
{
	return a.getsoluong()>b.getsoluong();
}

int main()
{
	int n,m;
	cout<<"Nhap so luong cty:";
	cin>>n;
	cout<<"Nhap so luong cong ty yeu cau:";
	cin>>m;
	DoanhNghiep dn[n];
	for(int i=0;i<n;i++)
	     cin>>dn[i];
	sort(dn,dn+n,cmp);
	for(int i=0;i<n;i++)
	     cout<<dn[i];
	cout<<"Cong ty co so luong tren "<<m<<" la:\n";
	for(int i=0;i<n;i++)
	{
		if(dn[i].getsoluong()>m)
		    cout<<dn[i];
	}
}

