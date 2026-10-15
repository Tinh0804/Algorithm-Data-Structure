#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;
};
node *makeNode(int x)
{
    node *newNode=new node();
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void pushFront(node **head,int x)
{
    node *newNode=makeNode(x);
    newNode->next=*head;
    *head=newNode->next;
}
void pushBack(node **head,int x)
{
    node *newNode=makeNode(x);
    node *temp=*head;
    if(temp->next==NULL)
      *head=newNode;
      return;
    while(temp->next!=NULL)
       temp=temp->next;
    temp->next=newNode;
}
void popFront(node **head)
{
    if(*head==NULL)
        return;
    node *temp=*head;
    *head=(*head)->next;
    delete temp;
}
void popBack(node **head)
{
    node *temp=*head;
    if(*head==NULL)
        return;
    if(temp->next==NULL)
    {
        *head==NULL;
        delete temp;
        return;
    }
    while(temp->next->next!=NULL)
        temp=temp->next;
    node *last=temp->next;
    temp->next=NULL;
    delete last;
}
void duyet(node *head)
{
    while(head!=NULL)
    {
       cout<<head->data;
       head=head->next;
    }
}
int main()
{
   node *head=NULL;
   for(int i=1;i<=5;i++)
     pushFront(&head,i);
   popBack(&head);
   popFront(&head);
   duyet(head);
}

