#include <iostream>
#ifndef BAOVE_H
#define BAOVE_H

#include "nhanvien.h"
using namespace std;

class baove:public nhanvien
{
	char *local,*duration;
	public:
		baove(char*tuoi,int *luong,char*ten,char*gioitinh,char*vitri,char*thoihan);
		void setLocal(char*local);
		void setDuration(char*duration);
		char*getLocal();
		char*getDuration();
		void display();
		~baove();
	protected:
};
#endif

