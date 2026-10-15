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
    *head=newNode;
}
void duyet( node *head) {
    while (head != NULL) {
        cout<<head->data<<" ";
        head = head->next;
    }
    
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
void insert(node **head,int k,int x)
{
    int n=dem(*head);
    node *temp=*head;
    node *newNode=makeNode(x);
    if(*head==NULL)
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
int main()
{
    node*head=NULL;
    for(int i=1;i<=5;i++)
        pushFront(&head,i);
    insert(&head,3,2);
    duyet(head);
}