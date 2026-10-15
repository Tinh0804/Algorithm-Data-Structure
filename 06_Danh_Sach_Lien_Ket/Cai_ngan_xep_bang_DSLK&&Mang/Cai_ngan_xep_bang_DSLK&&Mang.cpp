//#include <iostream>
//
//using namespace std;
//
//int n=0;
//int st[1010];
//void push(int x)
//{
//    st[n]=x;
//    n++;
//}
//void pop()
//{
//    if(n>=1)
//        n--;
//}
//int top()
//{
//    return st[n-1];
//}
//int size()
//{
//    return n;
//}
//int main()
//{
//    while(1)
//    {
//        cout<<"----------------";
//        cout<<"1.Push\n";
//        cout<<"2.Pop\n";
//        cout<<"3.Top\n";
//        cout<<"4.Size\n";
//        cout<<"0.Exit\n";
//        cout<<"----------------";
//        int k;
//        cout<<"\nMời bạn nhập lựa chọn:";
//        cin>>k;
//        if(k==1)
//        {
//            int x;
//            cout<<"Nhập x:";
//            cin>>x;
//            push(x);
//        }
//        else if(k==2)
//            pop();
//        else if(k==3)
//            cout<<"Phần tử đầu tiên:"<<top()<<endl;
//        else if(k==4)
//            cout<<"Kích cỡ của stack:"<<size()<<endl;
//        else
//            break;
//    }
//}
#include <iostream>

using namespace std;
struct node
{
    int data;
    struct node*next;
};
node*makeNode(int x)
{
    node *newNode=new node();
    newNode->data=x;
    newNode->next=NULL;
    return newNode;
}
void push_first(node **dau,int x)
{
    node *newNode=makeNode(x);
    if(*dau==NULL)
    {
        *dau=newNode;
        return ;
    }
    newNode->next=*dau;
    *dau=newNode;
}
void pop_first(node **dau,int x)
{
    node *newNode=makeNode(x);
}
int main()
{
    
}
