#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	 int max;
	 cout<<"nhap so luong so:";
	 cin>>max;
     int mang[max],s=0;
     cout<<"nhap so:";
     for (int i=0
	 ;i<(sizeof(mang)/sizeof(int));i++)
     {
     	cin>>mang[i];
     }
     for (int j=0;j<(sizeof(mang)/sizeof(int));j++)
     {
     	s+=mang[j];
     }
     cout<<"tong ="<<s<<endl;
     
     
}

