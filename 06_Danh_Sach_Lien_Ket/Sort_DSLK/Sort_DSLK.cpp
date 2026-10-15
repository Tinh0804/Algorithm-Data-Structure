#include <iostream>

using namespace std;
struct node
{
    int data;
     node *next;
};
void duyet(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"  ";
        head=head->next;
    }
}
node *makeNode(int x)
{
    node*newNode=new node();
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void pushFront(node **head,int x)
{
    node *newNode=makeNode(x);
    if(*head==NULL)
    {
        *head=newNode;
        return;
    }
    newNode->next=*head;
    *head=newNode;
    
}
void popFront(node **head)
{
    if(*head==NULL)
        return;
    node *temp=*head;
    *head=(*head)->next;
    delete temp;
}
// void sapxep(node **head)
// {
//     for(node *i=*head;i!=NULL;i=i->next)
//     {
//         node *minNode=i;
//         for(node *j=i->next;j!=NULL;j=j->next)
//         {
//             if(minNode->data>j->data)
//             {
//                 minNode=j;
//             }
//         }
//         int tmp=minNode->data;
//         minNode->data=i->data;
//         i->data=tmp;
//     }
// }
void sapxep(node **head)
{
    for(node *i=*head;i!=NULL;i=i->next)
    {
        for(node *j=i;j!=NULL;j=j->next)
        {
            if(i->data>j->data)
            {
                int tmp=i->data;
                i->data=j->data;
                j->data=tmp;
            }
        }
    }
}
int main()
{
    node *head=NULL;
    int a[]={10,2,6,4,8};
    for(int k=0;k<5;k++)
    {
        pushFront(&head,a[k]);
    }
    sapxep(&head);
    duyet(head);
}
