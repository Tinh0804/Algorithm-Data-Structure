#include <bits/stdc++.h>
using namespace std;

class Quanli{
	friend class Xep;//khai bao class friend
	private:
		int luong,tuoi;
		string ten,gioitinh,id;
	public:
		Quanli();
		Quanli(int,int,string,string);
		void nhap();
		friend void xuat(Quanli);//khai bao ham friend
		void in();
		~Quanli();
		double getluong();
		void setluong(int luong);
		static int dem;
		void tangdem();
		int xuatdem();
		friend void chuanhoa(Quanli&);//khai bao ham friend
		
		//toan tu nhap,xuat(cout,cin)
		//cout:ostream
		//cin:istream
		friend istream&operator>>(istream &in,Quanli&a);
		friend ostream&operator<<(ostream&out,Quanli a);//ham xuat khong can tham tri
//		friend bool operator >(Quanli &another);
};
istream&operator>>(istream&in,Quanli&a)//nap chong toan tu nhap
{
    cout<<"Nhap luong:";
	in>>a.luong;
	cout<<"Nhap tuoi:";
	cin>>a.tuoi;
	in.ignore();
	cout<<"Nhap ten:";
	getline(in,a.ten);
	cout<<"Nhap gioi tinh:";
	getline(in,a.gioitinh);
	return in;
}
ostream&operator<<(ostream&out,Quanli a)
{
    cout<<a.id<<" "<<a.luong<<" "<<a.tuoi<<" "<<a.ten<<" "<<a.gioitinh<<endl;
    return out;
}
//bool Quanli::operator>(Quanli &a)
//{
//	return this->Quanli().luong>a.luong
//}
class Xep
{
	private:
		string khoa;
	public:
		void update(Quanli&);
};
int Quanli::dem=0;//khai bao bien static
//void Quanli::tangdem()
//{
//	dem++;
//}
void Xep::update(Quanli &x)
{
     x.luong=1000;
}
int Quanli::xuatdem()
{
	return this->dem;
}
Quanli::Quanli()
{
	this->luong=0;
	this->tuoi=0;
	this->ten=this->gioitinh="";
}
Quanli::Quanli(int lu,int age,string name,string sex)
{
	this->luong=lu;
	this->tuoi=age;
	this->ten=name;
	this->gioitinh=sex;
}

//void Quanli::nhap()
//{
//	dem++;
//	this->id="SV00";//+itoa(dem,day,5);
//	cout<<"Nhap luong:";
//	cin>>luong;
//	cout<<"Nhap tuoi:";
//	cin>>tuoi;
//	cin.ignore();
//	cout<<"Nhap ten:";
//	getline(cin,ten);
//	cout<<"Nhap gioi tinh:";
//	getline(cin,gioitinh);
//}
Quanli::~Quanli()
{
//	cout<<"Ham huy duoc tao";
}
void Quanli::in()
{
    cout<<id<<" "<<luong<<" "<<tuoi<<" "<<ten<<" "<<gioitinh<<endl;
}

//void Quanli::xuat(Quanli a)
//{
//	cout<<a.id<<" "<<a.luong<<" "<<a.tuoi<<" "<<a.ten<<" "<<a.gioitinh<<endl;
//}
double Quanli::getluong()
{
	return this->luong;
}
void Quanli::setluong(int luong)
{
	this->luong=luong;
}
bool cmp(Quanli a,Quanli b)
{
	return a.getluong()>b.getluong();
}
int main()
{
   int n;
   cout<<"Nhap so luong sinh vien:";
   cin>>n;
//   Quanli a[n];
   Quanli sv;
//   sv.nhap();
   cin>>sv;
   Xep y;
   y.update(sv);
//   for (int i=0;i<n;i++)
//   {
//   	 a[i].nhap();
//   }
//   sort(a,a+n,cmp);
//   for  (int j=0;j<n;j++)
//   {
//   	  a[j].xuat();
//   }
//   sv.xuat();
//   xuat(sv);
     cout<<sv;
//    sv.in();
//   Quanli sv;
//   sv.nhap();
//   sv(luong,tuoi,ten,gioitinh);
//   sv.setluong(1000);
//   sv.xuat();
  
}

