#include <iostream>
#include "operatoroverloading.h"
using namespace std;

Operatoroverloading::Operatoroverloading()
{
	mau=1;
}
void Operatoroverloading::nhap()
{
	cout<<"\nNhap tu:";
	cin>>tu;
	do{
		cout<<"\nNhap mau:";
		cin>>mau;
	}while (!mau);	
	
}
 Operatoroverloading  Operatoroverloading::operator+( Operatoroverloading & p1)
 {
 	 Operatoroverloading p;
 	 p.tu=this->tu*p1.mau+this->mau*p1.tu;
 	 p.mau=this->mau*p1.mau;
 	 return p;
 }
void  Operatoroverloading::xuat()
{
	cout<<tu<<"/"<<mau<<endl;
}
Operatoroverloading::~Operatoroverloading()
{
}
