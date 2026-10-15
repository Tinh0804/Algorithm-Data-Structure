#include <iostream>
#include "Time.h"
#include <iomanip>
using namespace std;

Time::Time(int h,int m)
{
	hour=(h>=0 && h<=59)?h:0;
	min=(m>=0 && m<=59)?m:0;
}

void Time::display()
{
	cout<<"The Time is:"<<setw(2)<<setfill('0')<<hour
		<<":"<<setw(2)<<min<<endl;
}
Time&Time::operator ++()//prefix
{
	++min;
	if (min>=60)
	{
		++hour;
		min-=60;
	}
    return *this;	
}
Time Time::operator ++(int )// postfix
{
	Time t(hour ,min);
	++min;
	if (min >=60)
	{
		++hour;
		min-=60;
	}
	return t;
}
Time::~Time()
{
}
