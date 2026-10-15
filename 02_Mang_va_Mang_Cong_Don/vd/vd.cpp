#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int row,col;
    cout<<"nhap vao so cot:";
    cin>>row;
    cout<<"nhap vao so dong:";
    cin>>col;
   
    /*for (int i=0;i<row;i++)
    {
    	for (int j=0;j<col;j++)
    	{
    		cout<<"mang["<<i<<"]["<<j"]=";
    		cin>>mang[i][j];
    	}
    	
    }*/
    srand(time(NULL));
    int mang[row][col]=rand()%(99-1+1)+1;
    for (int i=0;i<row;i++)
    {
    	for (int j=0;j<col;j++)
    	  cout<<mang[i][j]<<"\t";
    	cout<<endl;
    	  
    }
    
}

