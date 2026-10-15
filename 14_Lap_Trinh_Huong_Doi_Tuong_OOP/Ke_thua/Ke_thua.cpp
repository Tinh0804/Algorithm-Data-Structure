#include <iostream>
#include <string.h>

using namespace std;
//base class:class cha
//derived class:class con
class Person
{
	private:
		string name,address;
	public:
		Person(string name,string address);
		string getName();
		string getAddress();
		void setName(string name);
		void setAddress(string address);
		void in()
		{
			cout<<name<<" "<<address;
		}
};
class Student:public Person{//dinh nghia class Studen ke thua thuoc tinh class Person
	private:
		float gpa;
	public:
		Student(string name,string address,float gpa):Person(name,address)
		{
			this->gpa=gpa;
		}
		float getGpa();
		void setGpa(float gpa);
		//function overriding:ham ghi de
		void in()
		{   
		    Person::in();
			cout<<" "<<gpa;
		};
};
Person::Person(string name,string address)
{
	this->name=name;
	this->address=address;
}
string Person::getName()
{
	return name;
}
string Person::getAddress()
{
	return address;
}
void Person::setName(string name)
{
	this->name=name;
}
void Person::setAddress(string address)
{
	this->address=address;
}
float Student::getGpa()
{
	return gpa;
}
void Student::setGpa(float gpa)
{
	this->gpa=gpa;
}
int main()
{
    Student s("Le Hoang Quach Tinh","Quang Nam",9.2);
//    s.setName("Le Hoang Quach Tinh");
//    s.setAddress("Quang Nam");
//    s.setGpa(9.2);
    //Neu muon goi ham in cua class Person thi ta dung
    //s.Person::in();
    s.in();
}

