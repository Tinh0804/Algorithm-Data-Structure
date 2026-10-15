#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int n=strlen(str);
    bool kt;
    for(int i=0;i<=n/2-1;i++)
    {
    	if(str[i]==str[n-i-1])
    	     kt=true;
    	else
    	     kt=false;
    }
    if(kt)
       printf("Chuoi doi xung:!");
    else
       printf("Chuoi khong doi xung:!");
}

