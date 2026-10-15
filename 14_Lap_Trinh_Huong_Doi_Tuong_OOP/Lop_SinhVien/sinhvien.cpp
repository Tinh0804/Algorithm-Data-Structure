#include <iostream>
#include "sinhvien.h"
#include <iomanip>
using namespace std;

SinhVien::SinhVien(char *ten,char *tuoi,char*gt,float ma,char*gr,char*id)
:Nguoi(ten,tuoi,gt)
{
	setMark(ma);
	setGrand(gr);
	setID(id);
	cout<<"\nHam to class SinhVien da duoc tao!\n";
	cout<<"--------------------------------"<<endl;
}
void SinhVien::setMark(float m)
{
		this->mark=m;
}
void SinhVien::setGrand(char *g)
		{
			this->grand=g;
		}
void SinhVien::setID(char *i)
		{
			this->ID=i;
		}
float SinhVien::getMark()const
		{
			return this->mark;
		}
char *SinhVien::getGrand()const
		{
			return this->grand; 
		}
char *SinhVien::getID()const
		{
			return this->ID;
		}
void SinhVien::display()const
{
	Nguoi::display();
	cout<<left<<setw(10)<<getID()<<setw(15)<<getGrand()<<setw(5)<<fixed<<setprecision(2)<<setfill('0')<<getMark();
	
}
SinhVien::~SinhVien()
{
	cout<<"\n--------------------------------"<<endl;
	cout<<"Ham huy class SinhVien da duoc tao!";
};
