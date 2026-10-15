#include <iostream>

using namespace std;

struct node
{
    int data;
    node*left;
    node*right;
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
void duyetLNR(node*head)
{
    if( head!=NULL)
    {
        duyetLNR(head->left);
        cout<<head->data<<" ";
        duyetLNR(head->right);
    }
}
node *Timkiem(node*head,int x)
{
    if(head == NULL)
        return NULL;
    else
    {
        if(head->data>x)
            return Timkiem(head->left,x);
        else if(head->data<x)
            return Timkiem(head->right,x);
        else
            return head;
    }
}
int main()
{
    node*head=NULL;
    int x,b;
    PushNode(&head,4);
    PushNode(&head,2);
    PushNode(&head,9);
    PushNode(&head,5);
    PushNode(&head,3);
    PushNode(&head,8);
    PushNode(&head,7);
    PushNode(&head,10);
    PushNode(&head,6);
    PushNode(&head,1);
    cout<<"Nhap phan tu can tim kiem:";
    cin>>x;
    node*p=Timkiem(head,x);
    if(p==NULL)
        cout<<x<<" khong ton tai!\n";
    else
        cout<<x<<" co ton tai!\n";
    duyetLNR(head);
     cout<<"Nhap phan tu can xoa:";
    cin>>b;
}