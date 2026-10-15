#include <iostream>
using namespace std;

bool kiemtrakhongtang(int n)
{
	int a,b;
	while (n>10)
    {
       b=n%10;
       n/=10;
       a=n%10;
       if (a<b){
       	return false;
       }
    }
    return true;
    
	
}
int main()
{
	int n;
	cout<<"nhap so can kiem tra tang hay khong:";
	cin>>n;
	if (kiemtrakhongtang(n))
	{
		cout<<n<<" la so khong tang\n";
	}
	else
	    cout<<n<<" la so tang\n";
}

