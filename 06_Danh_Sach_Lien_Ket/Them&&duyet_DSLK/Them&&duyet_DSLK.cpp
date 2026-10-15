#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

struct node *makeNode(int x)
{
    node *newNode=new node();
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void duyet(node *head)
{
    int dem=0;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
        dem++;
    }
}
void pushFront(node **head,int x)
{
    node *newNode=makeNode(x);
    //B1:Phan next cua newNode=>head
    newNode->next=*head;
    //B2:Cap nhat node head=>newNode(head sau==newNode->next truoc)
    *head=newNode;
}
//Function of C++
void pushFront2(node *&head,int x)
{
    node*newNode=makeNode(x);
    newNode->next=head;
    head=newNode;
}
void pushBack(node **head,int x)
{
    node *temp=*head;
    node *newNode=makeNode(x);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    //cho phan next cua node head->nexNode
    
    temp->next=newNode;
}
void pushBack2(node *&head,int x)
{
    node *temp=head;
    node *newNode=makeNode(x);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
}
int main()
{
   node*head=NULL;
//    for(int i=1;i<=5;i++)
//    {
//        pushFront(&head,i);
//    }
   for(int i=10;i<=20;i++)
       pushFront2(head,i);
   for(int i=10;i<=15;i++)
       pushBack2(head,i);
   duyet(head);
   
}
