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
        else 
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
void NodeTheMang(node **tmp,node**head)
{
    //cach 1
    if((*head)->left!=NULL)
        NodeTheMang(&*tmp,&(*head)->left);
    else
    {
        (*tmp)->data=(*head)->data;
        *tmp=*head;
        *head=(*head)->right;//xoa node

    }

    //cach 2
    // if((*head)->right!=NULL)
    //     NodeTheMang(tmp,&(*head)->right);
    // else
    // {
    //    tmp->data=(*head)->data;
    //     tmp=*head;
    //     *head=(*head)->left;
    // }
}

void XoaNode(node**head,int x)
{
    if(*head==NULL)
        return;
    else
    {
        if((*head)->data>x)
            XoaNode(&(*head)->left,x);
        else if((*head)->data<x)
            XoaNode(&(*head)->right,x);
        else
        {
            node *tmp=*head;
            if((*head)->left==NULL)
                *head=(*head)->right;
            else if((*head)->right==NULL)
                *head=(*head)->left;
            else
            {
                //cach 1
                NodeTheMang(&tmp,&(*head)->right);
                //cach 2
                // NodeTheMang(tmp,&(*head)->left);
                //Tinh nghi ra

            }
            delete tmp;
        }
    }
}
int main()
{
    node*head=NULL;
    PushNode(&head,3);
    PushNode(&head,-5);
    PushNode(&head,8);
    PushNode(&head,7);
    PushNode(&head,6);
    PushNode(&head,3);
    PushNode(&head,14);
    PushNode(&head,13);
    PushNode(&head,20);
    duyetLNR(head);
    while(Timkiem(head,3))
        XoaNode(&head,3);
    cout<<endl;
    duyetLNR(head);
}