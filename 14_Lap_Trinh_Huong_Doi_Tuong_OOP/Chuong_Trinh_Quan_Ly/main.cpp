#include <iostream>
#include <cstring>
#include <iomanip>

#include "SinhVien.h"//goi toi ham SinhVien
//co the #include "Nguoi.h" de goi toi ham Nguoi
using namespace std;

int main()
{

     char ten[40],tuoi[40],gt[40];
     strcpy(ten,"Tinh");
     strcpy(tuoi,"18");
     strcpy(gt,"Nam");
     char gr[40],id[40];
     float ma=10;
     strcpy(id,"ABC123");
     strcpy(gr,"23T1");
     
    SinhVien sv(ten,tuoi,gt,ma,gr,id);
     
     cout<<"\nThong tin sinh vien:\n";
     cout<<left<<setw(10)<<"Ten"<<setw(10)<<"Tuoi"<<setw(15)<<"Gioi Tinh"
     <<setw(10)<<"ID"<<setw(15)<<"Lop"<<setw(10)<<"Diem"<<endl;
     
	 cout<<left<<setw(11)<<"|"<<setw(10)<<"|"<<setw(15)<<"|"
     <<setw(10)<<"|"<<setw(15)<<"|"<<setw(10)<<"|"<<endl;
     sv.display();
}
