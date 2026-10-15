#include <iostream>
#ifndef NHANVIEN_H
#define NHANVIEN_H

class nhanvien
{
	int salary;
	char *name;
	char *age;
	char *sex;
	public:
		nhanvien(char*ten,char*gioitinh,char*tuoi,int*luong);
		void setName(char*name);
		void setSex(char*sex);
		void setAge(char*age);
		void setSalary(int *salary);
		char *getName();
		char *getSex();
		char *getAge();
		int *getSalary();
		void display();
		~nhanvien();
	protected:
};

#endif
