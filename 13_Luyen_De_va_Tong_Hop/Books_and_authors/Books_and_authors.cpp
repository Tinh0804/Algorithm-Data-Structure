#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 4
// -------------------------
// A Brief History of time
// 700000
// 2137
// 1
// Andrew Neiman
// Andrew Neiman.author@gamil.com
// M
// -------------------------
// Don Quixote
// 500000
// 2002
// 3
// Thomas Che
// Thomas Che.author@gmail.com
// M
// Lucas
// Lucas.author@gmail.com
// M 
// Happer Lee 
// Happer Lee.author@gmail.com
// M 
// -------------------------
// One Hundres Years of Solitude
// 700000
// 1920
// 2
// Feyman 
// Feyman,author@gmail.com
// M
// Tom Cruise
// Tom Cruise.author@gmail.com
// M
// -------------------------
// The Great Gatsby
// 600000
// 1588
// 1
// Kirk Wise 
// Kirk Wise.author@gmail.com
// M 
// -------------------------

class Author
{ 
    private:
       string email,name,gender;
    public:
       Author()
       {

       }
       Author(string name,string email,string gender)
       {
        this->email=email;
        this->name=name;
        this->gender=gender;
       }
       void display()
      {
        cout<<"Name:"<<this->name<<endl;
        cout<<"Email:"<<this->email<<endl;
        cout<<"Gender:"<<this->gender<<endl;
      }
       
};

class Book
{
   private:
      string name;
      vector<Author> authors;
      double price;
      int qty;
   public:
      Book(string name,vector<Author> authors,double price,int qty)
      {
        this->name=name;
        this->authors=authors;
        this->price=price;
        this->qty=qty;
      }
      string getName()
      {
        return this->name;
      }
      void BookDisplay()
      {
        cout<<"-----------------------------------\n";
        cout<<"Book information :\n";
        cout<<"Name:"<<this->name<<endl;
        cout<<"Price:"<<this->price<<endl;
        cout<<"Quantity:"<<this->qty<<endl;
        cout<<"Author information:\n";
        for(int i=0;i<authors.size();i++)
        {
            cout<<"#"<<i+1<<endl;
            authors[i].display();
        }
      }

};
bool cmp(Book a,Book b)
{
    return a.getName()<b.getName();
}
int main()
{
   int n;
   cin>>n;
   cin.ignore();
   vector<Book> a;
   for(int i=0;i<n;i++)
   {
       string tmp,ten;
       int qty, price;
       getline(cin,tmp);
       getline(cin,ten);
       cin>>price>>qty;
       vector<Author> v;
       int s1;cin>>s1;
       cin.ignore();
       for(int j=0;j<s1;j++)
       {
            string tentg,email,gender;
            getline(cin,tentg);
            getline(cin,email);
            getline(cin,gender);
            Author x(tentg,email,gender);
            v.push_back(x);
       }
       Book b(ten,v,price,qty);
       a.push_back(b);
   }
   sort(a.begin(),a.end(),cmp);
    for(Book x:a)
       {
          x.BookDisplay();
       }

}