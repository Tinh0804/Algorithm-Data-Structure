#include <iostream>
#include <string.h>

using namespace std;

//abbcaac
//4
void solve(string s)
{
    int start,end;
    int n=s.size();
    s="x"+s;//Tăng thêm 1 đơn vị ở chỉ số đầu để dễ dàng huận tiện cho việc xét chỉ số
    //F[i][j]=F[i+1][j-1] && (s[i]==s[j])
    //Trong đó i là chỉ số bắt đầu,j là chỉ số kết thúc của 1 xâu con
    bool F[n+1][n+1];
    memset(F,false,sizeof(F));
    for(int i=1;i<=n;i++)
       F[i][i]=true;//các xâu có 1 kí tự luôn đối xứng nên cho bằng true
    //xét các xâu con có độ dài từ 2 đến n
    int ans=1;
    for(int len=2;len<=n;len++)
    {
        for(int i=1;i<=n-len+1;i++)
        {
            int j=i+len-1;
            //F[i][j]:Có độ dài là len
            if(len==2 && s[i]==s[j])
               F[i][j]=true;
            else
            {
                F[i][j]=F[i+1][j-1] && (s[i]==s[j]);//Kiểm tra 2 kí tự đầu cuối giống nhau k và các kí tự nằm trong có đối xứng k
            }
            if(F[i][j])
            {
              ans=max(ans,len);
              start=i;
              end=j;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
         cout<<F[i][j]<<" ";
        cout<<endl;
    }
    cout<<"xâu con đối xứng dài nhất là:"<<ans<<endl;
    for(int i=start;i<=end;i++)
       cout<<s[i]<<" ";
}
int main()
{ 
    string s;
    cin>>s;
    solve(s);
}