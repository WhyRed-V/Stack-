#include <iostream>
using namespace std;
#define MAX 100
int issfull(int top){
    if (top==-1)
    return 1;
    else 
    return 0;
}
int isempty(int top){
    if (top==MAX-1)
    return 1;
    else
    return 0;
}
void push(int stack[],int *top,int item){
    if(*top==MAX-1){
        cout<<"Stack is full"<<endl;
        return;
    }
    else{
        stack[++(*top)]=item;
    }
}
void pop(int stack[],int *top){
    if (*top==-1){
        cout<<"stack is empty"<<endl;
        return;
    }else{
    cout<<"deleted item is "<<stack[*top];
    *top--;
    }
}
void display(int stack[],int top){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<endl;
    }
}
int main(){
int stack[MAX],item,choose,top=-1;
while(1){
    cout<<"Welcome to Stack program"<<endl;
    cout<<"Choose Option"<<endl;
    cout<<"1.Push"<<endl;
    cout<<"2.Pop"<<endl;
    cout<<"3.Display"<<endl;
    cout<<"4.Exit"<<endl;
    cin>>choose;
    switch (choose)
    {
    case 1:
        cout<<"Enter item"<<endl;
        cin>>item;
        push(stack,&top,item);
        break;
    case 2:
        pop(stack,&top);
    case 3:
        display(stack,top);
    default:
        exit(1);
        break;
    }
}
return 0;
}