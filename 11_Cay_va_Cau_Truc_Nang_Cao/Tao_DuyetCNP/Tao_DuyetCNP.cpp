#include <iostream>

using namespace std;
struct node
{
    int data;
    node *right;
    node *left;
};
node*makeNode(int x)
{
    node*newNode=new node();
    newNode->data=x;
    newNode->right=NULL;
    newNode->left=NULL;
    return newNode;
}
void PushNode(node**head,int x)
{
    node*newNode=makeNode(x);
    if(*head==NULL)
       *head=newNode;
    else
    {
        if((*head)->data>x)
            PushNode(&(*head)->left,x);
        else if((*head)->data<x)
            PushNode(&(*head)->right,x);
    }
}

void duyetLNR(node *head)
{
    if(head!=NULL)
    {
        duyetLNR(head->left);
        cout<<head->data<<" ";
        duyetLNR(head->right);
        
    }
}
void duyet(node *head)
{
    if(head!=NULL)
    {
           
             duyetLNR(head->right);
                 cout<<head->data<<" ";
                duyetLNR(head->left);
                
               
    }
}
void duyetNLR(node* head)
{
    if(head!=NULL)
    {
        cout<<head->data<<" ";
                 duyetNLR(head->left);
             duyetNLR(head->right);

         
          
       
     
   
    }
}
int main()
{
    node*head=NULL;
    PushNode(&head,33);
    PushNode(&head,6);
    PushNode(&head,15);
    PushNode(&head,7);
    PushNode(&head,17);
    PushNode(&head,23);
    PushNode(&head,46);
    PushNode(&head,37);
    PushNode(&head,41);
    PushNode(&head,50);
    duyet(head);
}