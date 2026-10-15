#include <bits/stdc++.h>

using namespace std;
//multiple untilevel
class A
{
  public:
	A()
	{
		cout<"Ham constructer duoc tao A!\n";
	}
	~A()
	{
		cout<<"Ham destructer duoc tao A!\n";
	}
	void xinchao()
	{
		cout<<"Xin chao A!\n";
	}
};
class B
{
  public:
	B()
	{
		cout<<"Ham constructer duoc tao B!\n";
	}
	~B()
	{
		cout<<"Ham destructer duoc tao B!\n";
	}
	void xinchao()
	{
		cout<<"Xin chao B!\n";
	}
};
class C
{
  public:	
	C()
	{
		cout<<"Ham constructer duoc tao C!\n";
	}
	~C()
	{
		cout<<"Ham destructer duoc tao C!\n";
	}
		void xinchao()
	{
		cout<<"Xin chao C!\n";
	}
};
//Multiple Inheritance
class D:public A,public B,public C 
{
	public:
		D()
		{
			cout<<"Ham D duoc ke thua tu A,B,C!\n";
		}
//		void xinchao()
//		{
//			cout<<"xin chao D!\n";
//		}
};
//Hierachical Inheritance

int main()
{
//    C tao;
    D tao;
//    tao.A::xinchao();//dung toan tu pham vi de dinh nghia can dung ham cua class nao
   tao.C::xinchao();
}

