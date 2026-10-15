#include <iostream>
using namespace std;

int main()
{
    int a,tong=0;
    cout<<"Moi nhap vao so nguyen a:";
    cin>>a;
    if (a%2==0)
    {
    	for (int i=0;i<=a;i+=2)
    	{
    		tong+=i;
    	}
    	cout<<"Tong cac so chan tu 0 den "<<a<<" la:"<<tong<<endl;
    }
    else
       cout<<"Toi khong tinh so le, bye bye"<<endl;   
    
}

