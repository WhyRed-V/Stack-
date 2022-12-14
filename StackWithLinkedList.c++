#include <iostream>
using namespace std;
typedef struct nodetype{
    int info;
    struct nodetype *next;
}node;
void push(node **top,int item){
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=item;
    ptr->next=*top;
    *top=ptr;
}
void pop(node **top){
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    if(*top==NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    ptr=*top;
    *top=ptr->next;
    free(ptr);
}
void display(node *top){
    if (top==NULL){
        cout<<"Stack is empty"<<endl;
        return;
    }
    while(top!=NULL){
        cout<<top->info<<endl;
        top=top->next;
    }
}
