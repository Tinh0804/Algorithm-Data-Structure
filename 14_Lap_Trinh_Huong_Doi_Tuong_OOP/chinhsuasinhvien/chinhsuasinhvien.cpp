#include <bits/stdc++.h>

using namespace std;
class Sinhvien
{
	private:
		string name,id,date;
		float gpa;
	public:
		Sinhvien();
		Sinhvien(string name,string date,float gpa);
		friend ostream&operator>>(ostream&xuat,Sinhvien a);
		friend istream&operator<<(istream&nhap,Sinhvien &a);
		void chuanhoa(Sinhvien&a);
//		void sapxep(Sinhvien a[],int n);
        float getgpa();
};
Sinhvien::Sinhvien()
{
	name="";
	id="";
	date="";
	gpa=0;
	
}
Sinhvien::Sinhvien(string name,string date,float gpa)
{
	this->name=name;
//	this->id=id;
	this->date=date;
	this->gpa=gpa;
}
istream&operator<<(istream&nhap,Sinhvien &a)
{

	a.id="B20DCCN001";
	nhap.ignore();
    cout<<"Nhap ten:";
	getline(nhap,a.name);
	cout<<"Nhap ngay sinh:";
	getline(nhap,a.date);
	cout<<"Nhap diem gpa:";
	nhap>>a.gpa;
	cout<<"\n";
	return nhap;
}
ostream&operator>>(ostream&xuat,Sinhvien a)
{
	xuat<<"Ma sv:"<<a.id<<"\nNgay sinh:"<<a.date<<"\nDiem gpa:"<<a.gpa;
	return xuat;
}
void Sinhvien::chuanhoa(Sinhvien&a)
{
	if(a.date[2]!='/')
	   a.date="0"+a.date;
	if(a.date[5]!='/')
	   a.date.insert(3,"0");
} 
//void Sinhvien::sapxep(Sinhvien a[],int n)
//{
//	Sinhvien tmp;
//	for(int i=0;i<n-1;i++)
//	   for(int j=i+1;j<n;j++)
//	      if(a[i].gpa>a[j].gpa)
//	      {
//	      	 tmp=a[i];
//	      	 a[i]=a[j];
//	      	 a[j]=tmp;
//	      }
//}
float Sinhvien::getgpa()
{
	return this->gpa;
}
bool cmp(Sinhvien a,Sinhvien b)
{
	 return a.getgpa()<b.getgpa();
}
int main()
{
  int n;
  cout<<"Nhap so luong sinh vien:";
  cin>>n;
  Sinhvien sv[10];
  for(int i=0;i<n;i++)
  {
     cin<<sv[i];
     sv[i].chuanhoa(sv[i]);
  }
  sort(sv,sv+n,cmp);
  for(int i=0;i<n;i++)
  cout>>sv[i];
}

