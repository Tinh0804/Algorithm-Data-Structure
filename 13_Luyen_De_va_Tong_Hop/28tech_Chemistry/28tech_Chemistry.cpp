#include <iostream>
#include <string.h>
#include <map>
 
using namespace std;
// 6
// H7Al6O7    
// Ca3Al4P7
// N3He7K4
// F5F6He6
// He5Ca4N3
// Ca6H6N7
int PTK(string s)
{
    if(s=="Al")
      return 27;
    if(s=="Ca")
       return 40;
    if(s=="F")
       return 19;
    if(s=="H")
       return 1;
    if(s=="He")
       return 4;
    if(s=="K")
       return 39;
    if(s=="N")
       return 14;
    if(s=="O")
       return 16;
    if(s=="P")
       return 31;
    if(s=="S")
       return 32;
    
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
       string s;
       int M=0,i=0;
       getline(cin,s);
       while(i<s.size())
        {
            string chu="";
            int so=0;
            while(isalpha(s[i]))
            {
                chu+=s[i];
                i++;
            }
         
            while(isdigit(s[i]))
            {
                so=so*10+s[i]-'0';
                i++;
            }
            M+=PTK(chu)*so;
        }
        cout<<M<<endl;
    }
}