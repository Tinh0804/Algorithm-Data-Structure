#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,du,nguyen;
    cin>>n;
    
    string s="";
    
    while(n>0)
    {
    	int m=0;
    	while((n/26)>26)
    	{
    		m=n/26;
    		while(m/26>26)
    		   m=m/26;
    		switch(m)
            {
            case 1:s+='A'; break;
    	    case 2:s+='B'; break;
            case 3:s+='C'; break;
    	    case 4:s+='D'; break;
    	    case 5:s+='E'; break;
    	    case 6:s+='F'; break;
    	    case 7:s+='G'; break;
    	    case 8:s+='H'; break;
    	    case 9:s+='I'; break;
	    	case 10:s+='J'; break;
	    	case 11:s+='K'; break;
	    	case 12:s+='L'; break;
	    	case 13:s+='M'; break;
	    	case 14:s+='N'; break;
	    	case 15:s+='O'; break;
	    	case 16:s+='P'; break;
	    	case 17:s+='Q'; break;
	    	case 18:s+='R'; break;
	    	case 19:s+='S'; break;
	     	case 20:s+='T'; break;
	    	case 21:s+='U'; break;
	    	case 22:s+='V'; break;
	    	case 23:s+='W'; break;
	    	case 24:s+='X'; break;
	    	case 25:s+='Y'; break;
	    	case 26:s+='Z'; break;
	        }
			n=n/26;   
		}
		nguyen=n/26;
        du=n%26;
    	if(nguyen>0)
    	  m=nguyen;
    	else
    	  m=du;
    	switch(m)
       {
        case 1:s+='A'; break;
    	case 2:s+='B'; break;
        case 3:s+='C'; break;
    	case 4:s+='D'; break;
    	case 5:s+='E'; break;
    	case 6:s+='F'; break;
    	case 7:s+='G'; break;
    	case 8:s+='H'; break;
    	case 9:s+='I'; break;
    	case 10:s+='J'; break;
    	case 11:s+='K'; break;
    	case 12:s+='L'; break;
    	case 13:s+='M'; break;
    	case 14:s+='N'; break;
    	case 15:s+='O'; break;
    	case 16:s+='P'; break;
    	case 17:s+='Q'; break;
    	case 18:s+='R'; break;
    	case 19:s+='S'; break;
    	case 20:s+='T'; break;
    	case 21:s+='U'; break;
    	case 22:s+='V'; break;
    	case 23:s+='W'; break;
    	case 24:s+='X'; break;
    	case 25:s+='Y'; break;
    	case 26:s+='Z'; break;
	   }
	   n=n/26;
	     
	}
	cout<<s;
}
