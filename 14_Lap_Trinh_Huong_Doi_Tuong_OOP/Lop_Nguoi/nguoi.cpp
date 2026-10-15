#include <iostream>
#include <cstring>
#include "nguoi.h"
#include <iomanip>

using namespace std;
Nguoi::Nguoi(char *ten,char *tuoi,char *gt)
{
	 setName(ten);
	 setAge(tuoi);
	 setSex(gt);
	 cout<<"\nHam tao class Nguoi duoc goi!:";
}
void Nguoi::setName(char *n)
		{
			this->name=n;
		}
void Nguoi::setAge(char *a)
		{
			this->age=a;
		}
void Nguoi::setSex(char *s)
		{
			this->sex=s;
		}
char *Nguoi::getName()const
		{
			return this->name;
		}
char *Nguoi::getAge()const
		{
			return this->age;
		}
char *Nguoi::getSex()const
		{
			return this->sex;
		}
void Nguoi::display()const
		{
			cout<<left<<setw(10)<<getName()<<setw(10)<<getAge()<<setw(15)<<getSex();
         	 
		}
		
Nguoi::~Nguoi()
{
	cout<<"\nHam huy class Nguoi duoc tao:!";
}
