#include <iostream>
using namespace std;
int count;
struct node
{
    int data;
    struct node*next;
};
node*makeNode(int x)
{
    node *newNode=new node();
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
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
void duyet(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void pushFront(node **head,int x)
{
    node*newNode=makeNode(x);
    newNode->next=*head;
    *head=newNode;
}
void pushBack(node **head,int x)
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
void insert(node **head,int k,int x)
{
    int n=dem(*head);
    node *temp=*head;
    node *newNode=makeNode(x);
    if(*head=NULL)
    {
        *head=newNode;
        return;
    }
    if(k==1)
        pushFront(head,x);
    if(k<1||k>n+1)
        return;
    for(int i=1;i<=k-2;i++)
        temp=temp->next;
    newNode->next=temp->next;
    temp->next=newNode;
    
}
void popFront(node **head,int x)
{
    node *temp=*head;
    if(temp->next==NULL)
    {
        delete temp;
        return ;
    }
    *head=(*head)->next;
    delete temp;
}
void erase(node **head,int k)
{
    int n=dem(*head);
    if(*head==NULL)
        return;
    if(k==1)
        popFront(head,1);
    if(k<1||k>n+1)
        return;
    node *temp=*head;
    for(int i=1;i<=k-2;i++)
        temp=temp->next;
    node *mid=temp->next;
    temp->next=mid->next;;
    delete mid;
    
}
int main()
{
    int vt;
    node*head=NULL;
    for(int i=1;i<=5;i++)
        pushFront(&head,i);
    cout<<"Nhap vi tri can xoa:";
    cin>>vt;
    erase(&head, vt);
    duyet(head);
}
