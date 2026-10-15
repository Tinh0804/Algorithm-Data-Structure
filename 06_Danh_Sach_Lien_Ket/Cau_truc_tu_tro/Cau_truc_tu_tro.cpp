#include <iostream>
#include <string.h>
using namespace std;

struct SinhVien {
    string name;
    string lop;
    double gpa;
};
struct node
{
    SinhVien data;//Lưu giá trị của 1 node
    struct node *next;//Lưu địa chỉ của ô node tiếp theo
};
//struct node
//{
//    int data;
//    struct node*next;
//};
node* makeNode(SinhVien sv)
{
    //node *newNode=(node)*malloc(sizeof(node));
    node *newNode=new node();
    newNode->data = sv;
    newNode->next=NULL;
    return newNode;
}
//int main()
//{
//    
//}
