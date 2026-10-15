#include <bits/stdc++.h>
using namespace std;

class Quanli
{
    private:
         int diem,gpa;
		 string ten;
	public:
	     Quanli();
		 Quanli(diem,gpa,ten);
		 void nhap();
		 void xuat();
		   	
};
void nhap(){
	cout<<"Nhap diem:";
	cin>>diem;
	cout>>"Nhap gpa:";
	cin>>gpa;
	cout<<"Nhap ten:";
	getline(ten);
	cin.ignore(ten);
}
void xuat()
{
	cout<<this->diem;
	cout<<this->gpa;
	cout<<this->ten;
}
int main()
{
   int diem,gpa;
   string ten;
   Quanli sv(diem,gpa,ten);
   sv.nhap();
   sv.xuat();
}

