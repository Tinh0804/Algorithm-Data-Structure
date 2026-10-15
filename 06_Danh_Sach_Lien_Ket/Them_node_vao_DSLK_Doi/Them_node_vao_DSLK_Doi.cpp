#include <iostream>

using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
node *makeNode(int x)
{
    node *newNode=new node();
    newNode->data=x;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}
void duyet(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int dem(node *head)
{
    int count=0;
    while(head!=NULL)
    {
        head=head->next;
        count++;
    }
    return count;
}
void themdau(node **head,int x)
{
    node*newNode=makeNode(x);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    newNode->next=*head;
    (*head)->prev=newNode;
    *head=newNode;
    
}
void themcuoi(node **head,int x)
{
    node *newNode=makeNode(x);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    
    node *temp=*head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
}
void themgiua(node **head,int k,int x)
{
    int n=dem(*head);
    if(k<1||k>n+1)
        return;
    if(k==1)
        themdau(head,x);
    node *temp=*head;
    node*newNode=makeNode(x);
    for(int i=1;i<=k-1;i++)
        temp=temp->next;
    newNode->next=temp;
    temp->prev->next=newNode;
    newNode->prev=temp->prev;
    
}
//Cach 2
// void themgiua(node **head,int k,int x)
// {
//     int n=dem(*head);
//     if(k<1||k>n+1)
//        return;
//     if(k==1)
//         themdau(head,x);
//     node *newNode=makeNode(x);
//     node *temp=*head;
//     for(int i=1;i<=k-2;i++)
//         temp=temp ->next;
//     node *last=temp->next;
//     last->prev=newNode;
//     temp->next=newNode;
//     newNode->next=last;
//     newNode->prev=temp;
// }
int main()
{
    node*head=NULL;
    while(1)
    {
        cout<<"---------------\n";
        cout<<"1.Them node vao dau\n";
        cout<<"2.Them node vao giua\n";
        cout<<"3.Them node vao cuoi\n";
        cout<<"4.Duyet\n";
        cout<<"0.Thoat\n";
        int vt,k,h;
        cout<<"Moi ban nhap lua chon:";
        cin>>vt;
        if(vt==1)
        {
            cout<<"Moi ban nhap gia tri:";
            cin>>k;
            themdau(&head,k);
        }
        else if(vt==2)
        {
            cout<<"Moi ban nhap gia tri:";
            cin>>k;
            cout<<"Moi ban nhap vi tri them:";
            cin>>h;
            themgiua(&head,h,k);
        }
        else if(vt==3)
        {
            cout<<"Moi ban nhap gia tri:";
            cin>>k;          
            themcuoi(&head,k);
        }
        else if(vt==4)
        {
            cout<<"Danh sach:";
            duyet(head);
        }
        else
            break;
    }
}
