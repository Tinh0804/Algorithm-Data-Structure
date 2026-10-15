#include <iostream>
#include <string.h>
#include <set>

using namespace std;

// abcadf
// acbaed
//4
int main()
{
    string X,Y;
    cin>>X>>Y;
    set<char> s;
    int n=X.size();
    int m=Y.size();
    int F[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 ||j==0)
              F[i][j]=0;
            else
            {
                if(X[i-1]==Y[j-1])//Nếu 2 kí tự của 2 xâu bằng nhau
                  {
                    F[i][j]=F[i-1][j-1]+1;//Cộng độ dài thêm 1
                    s.insert(X[i-1]);
                  }
                else
                  F[i][j]=max(F[i-1][j],F[i][j-1]);//Giữ lấy cái độ dài lớn hơn
            }
            cout<<F[i][j]<<" ";
        }
        cout<<endl;
    }
    for(auto it =s.begin();it!=s.end();it++)
       cout<<*it<<" ";
    cout<<endl<<F[n][m]<<endl;
}