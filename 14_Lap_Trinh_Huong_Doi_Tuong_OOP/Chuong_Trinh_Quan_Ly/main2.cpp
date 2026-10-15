#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
#include "baove.h"
int main()
{
	char ten[10],gioitinh[10],tuoi[10];
	int luong;
	char vitri[10],thoihan[10];
//	cout<<"nhap ten nhan vien:";
//	cin>>ten;
//	cout<<"nhap gioi tinh nhan vien:";
//	cin>>gioitinh;
//	cout<<"Nhap tuoi:";
//	cin>>tuoi;
//    nhanvien nv(ten,gioitinh,tuoi,luong);
    strcpy(ten,"Tinh");
    strcpy(gioitinh,"Nam");
    strcpy(tuoi,"18");
    strcpy(vitri,"gac cong");	
    strcpy(thoihan,"10 nam");
	luong=1000;
	baove bv(tuoi,luong,ten,gioitinh,vitri,thoihan);
	bv.display();	
}

