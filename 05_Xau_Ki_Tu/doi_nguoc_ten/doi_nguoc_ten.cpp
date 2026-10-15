#include <bits/stdc++.h>

using namespace std;
void reverse(string str,int n)
{
	int  start, end,i;
    char temp;
    i = 0;
//    daonguoc(str,n);
    while (i<n) 
	{
        while (str[i]==' ')
            i++;
        start = i;
        while (str[i] !=' ' && str[i]!='\0') 
            i++;
        end = i-1;
        //el gnaoh hcauq hnit   
        while (start < end) 
		{
            temp=str[start];
			str[start]=str[end];
			str[end]=temp;   
            start++;
            end--;
        }
    }
}
int main() 
{
    string Name;
    cout<<"Nhap ho va ten: ";
    getline(cin,Name);
	int n=Name.size();
    char tmp;
	int i=0;
	int j=n-1;
	while(i<=j)
	{
		tmp=Name[i];
		Name[i]=Name[j];
		Name[j]=tmp;
		i++;
		j--;
	}
	reverse(Name,n);
    cout<<"Chuoi dao nguoc theo tung tu:"<< Name;
}	


