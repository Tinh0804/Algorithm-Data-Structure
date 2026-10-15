#include <iostream>
using namespace std;


#ifndef TIME_H
#define TIME_H

class Time
{
	int hour;
	int min;
	public:
		Time(int h,int m);
		void display();
		Time&operator ++();//prefix
		Time operator ++(int);//postfix
		
		~Time();
	protected:
};

#endif
