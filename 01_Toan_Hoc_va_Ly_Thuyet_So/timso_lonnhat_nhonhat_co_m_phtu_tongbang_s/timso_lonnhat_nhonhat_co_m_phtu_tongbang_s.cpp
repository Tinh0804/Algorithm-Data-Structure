#include <bits/stdc++.h>
//cho so m va s khong am
//tim so be nhat va lon nhat co m chu so va tong bang s
//in:2 15
//out:69 96
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s;
    if(s>9*m||(s==0&&m>=2))
    	cout<<"Khong ton tai so lon nhat,nho nhat!";
    else if(s==0&&m==1)
        cout<<"0 0";
    else
    {
    	int lon[m]={0};
    	int be[m]={0};
    	int tmp=s;
    	for(int i=0;i<m;i++)
    	   if(s>=9)
    	   {
    	     lon[i]=9;
    	     s-=9;
    	   }
    	   else
    	   {
    	      lon[i]=s;
    	      break;
    	   }
    	tmp--;//de danh 1 don vi cho hang dau tien
    	for(int i=m-1;i>0;i--)
    	{
    		if(tmp>=9)
    		{
    			be[i]=9;
    			tmp-=9;
    		}
    		else
    		{
    			be[i]=tmp;
    			break;
    		}
    	}
    	be[0]=tmp+1;
    	for(int i=0;i<m;i++)
    	   cout<<be[i];
    	cout<<" ";
        for(int i=0;i<m;i++)
           cout<<lon[i];
    }
    
}

