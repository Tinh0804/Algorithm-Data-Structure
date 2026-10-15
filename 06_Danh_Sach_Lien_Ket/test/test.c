#include <stdio.h>
#include <stdlib.h> 
struct node {
    int data;
    struct node *next;
};
 struct node *makeNode(int x)
{
    struct node *newNode=(struct node*) malloc(sizeof(struct node));
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}

void pushFront(struct node **head,int x)
{
    struct node*newNode=makeNode(x);
    newNode->next=*head;
    *head=newNode;
}
void pushBack(struct node **head,int x)
{
    struct node*newNode=makeNode(x);
    if(*head==NULL)
     {   *head=newNode;
        return;}
    else
    {
        struct node*tmp=*head;
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next=newNode;
    }
}
void duyet(struct node *head)
{
    if(head==NULL)
        printf("Danh sach rong!\n");
    else
    {
        while(head!=NULL)
        {
            printf("%d ",head->data);
            head=head->next;
        }
    }
}
int main()
{
    struct node*head=NULL;
    for(int i=0;i<5;i++)
    {
        // pushFront(&head,i);
        pushBack(&head,i);
    }
    duyet(head);

}