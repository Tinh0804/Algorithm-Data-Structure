#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int max=200;
    char str[max],tam;
    cout<<"moi ban nhap vao chuoi:";
    cin.getline(str,max);
    //kim tra do dai chuoi nhap vao
    int len=strlen(str);
    cout<<"do dai cua str la:"<<len<<endl;
    for (int i=len-1;i>=0;i--)
       cout<<str[i];
    //dao nguoc cach 2
    cout<<endl;
    for (int i=0;i<len;i++)
    {
    	char tam=str[i];
    	str[i]=str[len-i-1];
    	str[len-i-1]=tam;
    }
    cout<<"chuoi dao nguoc la:"<<str<<endl;
 
}

