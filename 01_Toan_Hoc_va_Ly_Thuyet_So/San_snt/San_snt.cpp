#include <bits/stdc++.h>

using namespace std;
void sansnt(int n)
{
	int mang[n];
	//coi tat ca cac so tu 0 cho toi n la so nguyen to
	//mang[i]=1
	//mang[i]=0
	for(int i=0;i<=n;i++)
	     mang[i]=1;
	//Loai 0 va 1
	mang[0]=mang[1]=0;
	for(int i=2;i<=sqrt(n);i++)
		if(mang[i]==1)
			//Duyet tat ca cac buoi so cua i va cho no khong phai laf so nguen to
			for(int j=i*i;j<=n;j+=i)
				mang[j]=0;//khong con la so nguyen to 
	for(int i=0;i<=n;i++)
		if(mang[i]==1)
		  cout<<i<<" ";

}
int main()
{
  int n;
  cout<<"Nhap so:";
  cin>>n;
  sansnt(n);
}


