#include <iostream>
using namespace std;

int main()
{
	int s=0,n,d=0,mang[]={4,5,3,10,0,7,10,5,5,0,0,0};
	for (int i=0;i<(sizeof(mang)/sizeof(int));i++)
	    s+=mang[i];
    cout<<"tong cac phan tu trong mang la: "<<s<<endl;
    cout<<"nhap sp can kiem tra:";
    cin>>n;
    for  (int i=0;i<(sizeof(mang)/sizeof(int));i++)
    {
    	if (n==mang[i])
    	   d++;   	
    }
    if (d>=1)
    {
    	cout<<"so "<<n<<" co ton tai trong mang"<<endl;
    	cout<<"so lan xuat hien la:"<<d<<endl;
    }
    else
       cout<<"so "<<n<< " khong ton tai trong mang"<<endl;
	
}

