#include <iostream>
#ifndef SINHVIEN_H
#define SINHVIEN_H

#include "Nguoi.h"
using namespace std;

class SinhVien : public Nguoi
{
	float mark;
	char *grand;
	char *ID;
	public:
		SinhVien(char *ten,char *tuoi,char*gt,float ma,char*gr,char*id);
		void setMark(float ma);
		void setGrand(char *gr);
		void setID(char *id);
		float getMark()const;
		char *getGrand()const;
		char *getID()const;
		void display()const;
		~SinhVien();
	protected:
};

#endif
