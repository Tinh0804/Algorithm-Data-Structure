#include <iostream>
#include <string>

using namespace std;
void dao(char a,char b)
{
    char tmp=a;
    a=b;
    b=tmp;
}
int reverse(string s)
{
    //12345
    int n=s.length();
    for(int i=0;i<n/2;i++)
    {
       int  j=n-i-1;
       char tmp=s[i];
       s[i]=s[j];
       s[j]=tmp; 
    }
    return stoi(s);
}

int main()
{
   string s;
   getline(cin,s);
   cout<<reverse(s)<<endl;
}