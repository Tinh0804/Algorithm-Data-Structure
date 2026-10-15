#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a,b,c;
	double dtb;
	cout<<"nhap diem mon toán:";
	cin>>a;
	cout<<"nhap diem mon van:";
	cin>>b;
	cout<<"nhap diem mon anh:";
	cin>>c;
	dtb=(a+b+c)/3;
	cout<<"diem trung binh la:"<<setprecision(3)<<dtb<<endl;
	
	
}
