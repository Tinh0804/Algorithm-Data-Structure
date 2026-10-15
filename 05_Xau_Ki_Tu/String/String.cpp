#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s="28tech tu hoc";
    cout<<s.size()<<endl;
    char it;
    //neu muon nhap xau khong dau space thi dung cin
    //neu muon nhap xau co dau space thi dung getline(cin,s)
    for (char i=0;i<s.size();i++)
       cout<<s[i]<<" ";
//    for (auto it=s.begin();it!=s.end();it++)
//       cout<<*it<<" ";
//     string co the dung push_back hoac pop_back de them hoac xoa 1 ki tu trong string
//   ham insert("vi tri chen","ki tu muon chen")
    s.insert(2,"@@@@@");
    cout<<endl;
    for (char i=0;i<s.size();i++)
       cout<<s[i]<<" ";
//ham s.erase("vi tri dau","vi tri cuoi");
    s.erase(2,4);
    cout<<endl;
    for (char i=0;i<s.size();i++)
       cout<<s[i]<<" ";
//ham s.find("xau can tim") se tra ve vi tri xuat hien cua xau can tim nam trong xau s
    string t="tech";
  if(s.find(t)!=string::npos)
       cout<<endl<<s.find(t)<<endl;
  else
      cout<<"\nNOT FOUND";
  cout<<endl<<string::npos<<endl;//string::npos la vi tri ma xau khong tim thay
  //Neu muon cong xau thi ta co the ghi s=s+"tinh";
  //neu muon cong 1 ki tu thi ta phai ghi s+="@" ,khong duoc ghi s=s+"@"=>loi
}

