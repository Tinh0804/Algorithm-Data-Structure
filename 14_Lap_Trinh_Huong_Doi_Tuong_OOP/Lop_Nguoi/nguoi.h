#include <iostream>
#ifndef NGUOI_H
#define NGUOI_H
using namespace std;
class Nguoi
{
	char *name;
	char *age;
	char *sex;
	public:
		Nguoi(char *ten,char *tuoi,char *gt);
		void setName(char *ten);
		void setAge(char *tuoi);
		void setSex(char *gt);
		char *getName()const;
		char *getAge()const;
		char *getSex()const;
		void display()const;
		~Nguoi();
	protected:
};

#endif
