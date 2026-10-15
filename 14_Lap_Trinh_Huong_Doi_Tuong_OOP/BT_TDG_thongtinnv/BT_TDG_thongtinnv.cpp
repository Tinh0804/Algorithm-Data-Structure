#include <bits/stdc++.h>

using namespace std;
class Nhanvien
{
	private:
		string name,sex,date,address,mst,date_hd;
		int id;
	public:
		static int d;
	    Nhanvien();
		friend ostream&operator<<(ostream&,Nhanvien a);
		friend istream&operator>>(istream&,Nhanvien&A);
		friend bool operator<(Nhanvien a,Nhanvien b);
		void sapxep(Nhanvien a[],int n);
};
Nhanvien::Nhanvien()
{
	mst=name=sex=date=address=date_hd="";
	id=0;
}
bool Nhanvien::operator<(Nhanvien a,Nhanvien b)
{
	string s1=a.date;
	string s2=b.date;
	int t1,t2,ng1,ng2,n1,n2;
	ng1=(s1[0]-'0')*10+s1[1]-'0';
	ng2=(s2[0]-'0')*10+s2[1]-'0';
	t1=(s1[3]-'0')*10+s1[4]-'0';
	t2=(s2[3]-'0')*10+s2[4]-'0';
	n1=stoi(s1.substr(6));
	n2=stoi(s2.substr(6));
	if(n1!=n2)
	   return n1<n2;
	if(t1!=t2)
	   return t1<t2;
	return ng1<ng2;
}
ostream&operator<<(ostream& xuat,Nhanvien a)
{
	xuat<<"Thong tin nhan vien:\n";
	xuat<<a.id<<" "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.address<<" "<<a.mst<<" "<<a.date_hd<<endl;
	return xuat;
}
istream&operator>>(istream& nhap,Nhanvien &a)
{
	Nhanvien a();
	Nhanvien::d+=1;
	a.id="00001";
	nhap.ignore();
	getline(nhap,a.name);
	getline(nhap,a.sex);
	getline(nhap,a.date);
	getline(nhap,a.address);
	getline(nhap,a.mst);
	nhap.ignore();
	cin>>a.id;
	return nhap;
}
int Nhanvien::d=0;
#define a() a
int main()
{
   int n;
   cout<<"Nhap so luong nhan vien:";
   cin>>n;
   Nhanvien a[n];
   for(int i=0;i<n;i++)
   {
   	  cin>>a;
   }
   for(int i=0;i<n;i++)
   {
   	   cout<<a;
   }
}

