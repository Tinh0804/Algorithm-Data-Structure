#include <iostream>
using namespace std;
#include "nhanvien.h"

nhanvien::nhanvien(char *ten,char *gioitinh,char *tuoi,int *luong)
{
	setName(ten);
	setSex(gioitinh);
	setAge(tuoi);
	setSalary(luong);
	cout<<"\nHam tao duoc tao";
}
void nhanvien::setName(char *n)
{
	this->name=n;
}
void nhanvien::setSex(char *g)
{
	this->sex=g;
}
void nhanvien::setAge(char*t)
{
	this->age=t;
}
void nhanvien::setSalary(int*l)
{
	this->salary=l;
}
char*nhanvien::getName()
{
	return this->name;
}
char*nhanvien::getSex()
{
	return this->sex;
}
char*nhanvien::getAge()
{
	return this->age;
}
int *nhanvien::getSalary()
{
	return this->salary;
}
void nhanvien::display()
{
	cout<<endl<<getName()<<endl;
	cout<<getSex()<<endl;
	cout<<getAge()<<endl;
	cout<<getSalary()<<endl;
}
nhanvien::~nhanvien()
{
	cout<<"\Ham huy da duoc tao";
}
