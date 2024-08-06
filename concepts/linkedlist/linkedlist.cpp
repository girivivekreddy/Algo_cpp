#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node *head = NULL;
int nodes = 0;


void insertatbeginning(int x){
    Node* temp = new Node;
    temp->data = x;
    temp->next = head;
    head = temp;
}

void insertatn(int x, int pos){
    if(pos>nodes+1){
        cout<<"Out of bound";
        return;
    }
    Node *temp = new Node;
    Node *temp2 = head;
    temp->data = x;
    temp->next = NULL;
    if(pos==1){
        temp->next = head;
        head = temp;
        return;
    }
    for(int i=0;i<pos-2;i++){
        temp2 = temp2->next;
    }
    temp->next = temp2->next;
    temp2->next = temp;
}

void deleteatn(int pos){
    if(pos>nodes){
        cout<<"nodes out of bound";
        return;
    }
    Node *temp = head;
    if(pos==1){
        head = temp->next;
        delete[] temp;
        return;
    }
    Node *temp2 = NULL;
    for(int i=0;i<pos-1;i++){
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = temp->next;
    delete[] temp;
}



void Print(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    cout<<"******MENU******\n1. Insert at beginning\n2. Insert at n\n3. Print\n4. delete at n\n5. exit\n";

    int n;

    while(1){
            cout<<"Select a choice: ";
    int choice;cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter number: ";
            cin>>n;
            insertatbeginning(n);
            nodes++;
            break;

        case 2:
            int pos;
            cout<<"Enter number & pos: ";
            cin>>n>>pos;
            insertatn(n,pos);          
            nodes++;
            break;
        
        case 3:
            Print();
            break;
        case 4:
            cout<<"Enter pos: ";
            cin>>pos;
            deleteatn(pos);
            nodes--;
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}