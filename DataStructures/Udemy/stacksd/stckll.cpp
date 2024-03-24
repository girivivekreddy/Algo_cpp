#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;
static int siz;

void push(){
    struct Node* temp;
    if(siz == 0) {
        cout<<"Stack is full"<<endl;
        return;
    }
    temp = new Node;
    cout<<"Enter element to push into stack: ";cin>>temp->data;
    temp->next = head;
    head = temp;
    siz--;
}

void display(){
    struct Node* p = head;
    if(head==NULL){
        cout<<"Stack is empty"<<endl;return;
    }
    cout<<"Elements of stack are: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

void pop(){
    struct Node* p = head;
    head = p->next;
    delete p;
}

int main(){
    cout<<"Enter size of stack to create: ";cin>>siz;int t = 4 ;
    while(t--){    push();
    display();}

    pop();
    display();
    return 0;
}   