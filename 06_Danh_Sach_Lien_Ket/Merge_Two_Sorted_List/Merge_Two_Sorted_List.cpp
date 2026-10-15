#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};
node *head=NULL;
node *makeNode(int x)
{
    node *newNode=new node();
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void in(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void PushBack(node **head,int x)
{
    node*newNode=makeNode(x);
    if(*head==NULL)
    {
        *head=newNode;
        return ;
    }
    node *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
}
node *Merge(node *head1,node *head2,node **head)
{
    node *temp1=head1;
    node *temp2=head2;
  
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data < temp2->data)
       {
            PushBack(head,temp1->data);
            temp1=temp1->next;
       }
       else
       {
            PushBack(head,temp2->data);
            temp2=temp2->next;
       }
    }
    while(temp1!=NULL)
    {
        PushBack(head,temp1->data);
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    { 
        PushBack(head,temp2->data);
        temp2=temp2->next;
    }
    return *head;
    
}
int main()
{
  node *head1=NULL;
  node *head2=NULL;
  node *head=NULL;
  int m,n;
  cin>>m>>n;
  while(m--)
  {
    int x;
    cin>>x;
    PushBack(&head1,x);
  }
  while(n--)
  {
    int x;
    cin>>x;
    PushBack(&head2,x);
  }
  Merge(head1,head2,&head);
  in(head);
}