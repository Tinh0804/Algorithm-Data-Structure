#include <iostream>
#include "baove.h"
#include <iomanip>
using namespace std;

baove::baove(char*tuoi,int*luong,char*ten,char*gioitinh,char*vitri,char*thoihan)
:nhanvien(char*ten,char*gioitinh,char*tuoi,int*luong)
{
	setLocal(char*vitri);
	setDuration(char*thoihan);
	cout<<"Ham tao da duoc goi!";
}
void baove::getLocal(char*vitri)
{
	this->local=vitri;
}
void baove::getDuration(char *thoihan)
{
	this->duration=thoihan;
}
char *baove::getLocal()
{
	return this->local;
}
char *baove::getDuration()
{
	return this->duration;
}
void baove::display()
{
	nhanvien::display();
	cout<<"vi tri:"<<getLocal()<<endl;
	cout<<"thoi han:"<<getDuration()<<endl;
}	
baove::~baove()
{
	cout<<"Ham huy da duoc tao!";
};
