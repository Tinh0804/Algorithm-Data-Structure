#include <iostream>
#include <string.h>
using namespace std;

struct SinhVien
{
    string name;
    float gpa;
    int year;
    SinhVien()
    {
        
    }
    SinhVien(string ten,float dtb,int namsinh)
    {
        name=ten;
        gpa=dtb;
        year=namsinh;
    }
};
struct node
{
    SinhVien data;
    struct node *next;
};
node *makeNode(SinhVien x)
{
    node*newNode=new node();
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void pushBack(node **head,SinhVien x)
{
    node*newNode=makeNode(x);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    node *temp=*head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    
}
void duyet(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data.name<<" "<<head->data.gpa<<" "<<head->data.year<<endl;
        head=head->next;
    }
}
void sapxep(node **head)
{
    for(node *i=*head;i!=NULL;i=i->next)
    {
        for(node *j=i;j!=NULL;j=j->next)
        {
            if(i->data.gpa > j->data.gpa)
            {
                SinhVien temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
            else if(i->data.gpa == j->data.gpa)
            {
                if(i->data.name > j->data.name>0)
                {
                    SinhVien temp=i->data;
                    i->data=j->data;
                    j->data=temp;
                }
                else{
                     SinhVien temp=j->data;
                     j->data=i->data;
                     i->data=temp;
                }
            }
        }
    }
}
int main()
{
    node*head=NULL;
    int n;
    cout<<"Nhập số lượng sinh viên:";
    cin>>n;
    SinhVien sv[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Nhập tên sv "<<i<<":";
        cin.ignore();
        getline(cin,sv[i].name);
        cout<<"Nhập điểm sv "<<i<<":";
        cin>>sv[i].gpa;
        cout<<"Nhập năm sinh sv "<<i<<":";
        cin>>sv[i].year;
        pushBack(&head,sv[i]);
    }
    // SinhVien t("Lê Hoàng Quách Tỉnh",9,2005);
    // SinhVien i("Trương Văn Hiên",8.5,2004);
    // SinhVien n("Nguyễn Tấn Tín",9.2,2004);
    // SinhVien h("Lê Văn Khánh",8,2004);
    // pushBack(&head,t);
    // pushBack(&head,i);
    // pushBack(&head,n);
    // pushBack(&head,h);
    sapxep(&head);
    duyet(head);
}
