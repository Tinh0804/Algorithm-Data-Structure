#include <iostream>
using namespace std;

int main()
{   int row,col;
    cout<<"nhap so cot:";
    cin>>row;
    cout<<"nhap so hang:";
    cin>>col;
    int mang[row][col];
    for (int i=0;i<row;i++)
    {
    	for (int j=0;j<col;j++)
    	{
    	
    	  cout<<"mang["<<i<<"]["<<j<<"]=";
    	  cin>>mang[i][j];
        }
    	cout<<endl;
    }
     for (int i=0;i<row;i++)
    {
    	for (int j=0;j<col;j++)
    	{
    	    cout<<mang[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    int max=mang[0][0];
    for (int i=0;i<row;i++)
    {
    	for (int j=0;j<col;j++)
    	{
    		if (mang[i][j]>=max)
    		   max=mang[i][j];
    	}
    }
    cout<<"gia tri lon nhap la:"<<max<<endl;
    int n,d=0;
    cout<<"nhap so can kiem tra:";
    cin>>n;
	for (int i=0;i<row;i++)
    {
    	for (int j=0;j<col;j++)
    	{
    		if (mang[i][j]==n)
    		  d+=1;
    	}
    }
    if (d>=1)
    {
    	cout<<"so "<<n<<" co ton tai trong mang \n";
    	cout<<"so lan xuat hien la:"<<d<<endl;
    }
    else
        cout<<"khong ton tai "<<n<<" trong mang \n";
}

