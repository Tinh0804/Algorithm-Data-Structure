#include <iostream>
using namespace std;
class Thongtin
{
	private:
	   string ten,gioitinh,diachi,id;
	   int tuoi;
	public:
		Thongtin(string ten,string gioitinh,string diachi,int tuoi,string id)
		{
			this->ten=ten;
			this->gioitinh=gioitinh;
			this->diachi=diachi;
			this->tuoi=tuoi;
			this->id=id;
		}
		friend istream&operator>>(istream&in,Thongtin&a);
		friend ostream&operator<<(ostream&out,Thongtin a);
		void setName(string ten)
		{
			this->ten=ten;
		}
		void setSex(string gioitinh)
		{
			this->gioitinh=gioitinh;
		}
		void setAddress(string diachi)
		{
			this->diachi=diachi;
		}
		void setAge(int tuoi)
		{
			this->tuoi=tuoi;
		}
		void setId(string id)
		{
			this->id=id;
		}
		string getName()
		{
			return this->ten;
		}
		string getSex()
		{
			return this->gioitinh;
		}
		string getAddress()
		{
			return this->diachi;
		}
		int getAge()
		{
			return this->tuoi;
		}
		string getId()
		{
			return this->id;
		}
		void xuat()
		{
			cout<<this->getName()<<" "<<this->getSex()<<" "<<this->getAddress()<<" "<<this->getAge()<<" "<<this->getId()<<endl;
		}
};
class Quanli:public Thongtin
{
	private:
		int luong;
	public:
		Quanli(string ten,string gioitinh,string diachi,int tuoi,string id,int luong):Thongtin(ten,gioitinh,diachi,tuoi,id)
		{
			this->luong=luong;
		}
		void setSalary(int luong)
		{
			this->luong=luong;
		}
		int getSalary()
		{
			return this->luong;
		}
};
istream&operator>>(istream &in,Quanli &a)
{
//   in>>a.setName(ten)>>a.setSex(gioitinh)>>a.setAddress(diachi)>>a.setAge(tuoi)>>a.setId(id);
//   cout<<"Nhap ten:";
//   getline(in,a.get);
//   cout<<"Nhap gioi tinh:";
//   getline(in,a.gioitinh);
//   cout<<"Nhap dia chi:";
//   getline(in,a.diachi);
//   cout<<"Nhap tuoi:";
//   cin>>a.tuoi;
//   in.ignore();
//   cout<<"Nhap id:";
//   getline(in,a.id);
//   cin>>a.luong;
    a.setName("Tinh");
    a.setSex("Nam");
    a.setAddress("Quang Nam");
    a.setAge(19);
    a.setId("23115053122145");
    a.setSalary(11100);
    return in;
}
ostream&operator<<(ostream&out,Quanli a)
{
   out<<a.getName()<<" "<<a.getSex()<<" "<<a.getAddress()<<" "<<a.getAge()<<" "<<a.getId()<<" "<<a.getSalary()<<endl;
   return out;
}
int main()
{
//    Thongtin T("Tinh","Nam","Quang Nam",18,"23115053122145");
//    cin>>T;
    Quanli Q("Tinh","Nam","Quang Nam",18,"23115053122145",900);
    cin>>Q;
    cout<<Q;
}

