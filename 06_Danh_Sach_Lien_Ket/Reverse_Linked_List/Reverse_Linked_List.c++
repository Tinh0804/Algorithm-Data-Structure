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
node* ReverselinkedList(node **head)
{
   node *prev=NULL;
   node *current = *head;
   node *next;
   
   while(current!=NULL)
   {
      next=current->next;
      current->next=prev;
      prev=current;
      current=next;
   }
   *head=prev;
   return *head;
}
void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
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
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
int main()
{
   int n;
   cin>>n;
   node *head=NULL;
   for(int i=0;i<n;i++)
   {
     int x;
     cin>>x;
     pushBack(&head,x);
   }
   ReverselinkedList(&head);
   print(head);

}