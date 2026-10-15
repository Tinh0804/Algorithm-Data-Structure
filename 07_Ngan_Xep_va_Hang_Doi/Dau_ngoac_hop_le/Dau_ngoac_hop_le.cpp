#include <iostream>
#include <string>

using namespace std;
int main()
{
   int mang[6]={0,0,0,0,0,0};
   string s;
   getline(cin,s);
   for(int i=0;i<s.size();i++)
   {
   	   if(s[i]==')')
   	      mang[0]++;
   	   if(s[i]==')')
   	      mang[1]++;
   	   if(s[i]=='[')
   	      mang[2]++;
   	   if(s[i]==']')
   	      mang[3]++;
   	   if(s[i]=='{')
   	      mang[4]++;
   	   if(s[i]=='}')
   	      mang[5]++;
   }
    if(mang[0]==mang[1]&&mang[2]==mang[3]&&mang[4]==mang[5])
       cout<<"True";
    else
       cout<<"False";

}

