//BUILD FULL WORKING LIKNKED LIST OPERATIONS.
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node *head = NULL;

void InsertAtBeginning(){
    int x;
    cout<<"Enter data to insert at beginning of the node: ";
    cin>>x;
    Node *temp = new Node;
    temp->next = head;
    head = temp;
    temp->data = x;
}

void ReverseLoop(){
    Node *q=NULL,*w=head,*e;
    q->next=NULL;
    while(e->next!=NULL){
        w->next = q;
        q=q->next;
        w=w->next;
        e=e->next;
    }
    e->next = w;
    head = e;
}

void InsertAtPosN(){ //0 index
    int pos,x;
    cout<<"Enter position[0-indexing] and data respectively: ";
    cin>>pos>>x;
    if(pos==0){
        Node *temp = new Node;
        temp->next = head;
        temp->data = x;
        head = temp;
        return;
    }
    Node *p = head;
    Node *prev;
    while(pos--){
        prev = p;
        p = p->next;
        if(p==NULL) break;
    }
    Node *temp = new Node;
    temp->next = p;
    temp->data = x;
    prev->next = temp;
}

void DeleteAtPosN(){

    Node *p = head;
    int x;
    cout<<"Enter position(0-indexing) to delete NODE: ";
    cin>>x;
    if(x==0){
        head = head->next;
        delete p;
        return;

    }
    Node *prev;
    while(x--){
        prev = p;
        p = p->next;
        if(p->next==NULL) break;
    }
    prev->next = p->next;
    delete p;
}

void Display(){
    if(head==NULL) {
        cout<<"List is Empty.\n";
        return;
    }
    Node *p = head;
    cout<<"List is: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

void Menu(){
    cout<<"MENU\n";
    cout<<"1. InsertAtBeginnig\n";
    cout<<"2. InsertAtPosN\n";
    cout<<"3. Display\n";
    cout<<"4. DeleteAtPosN\n";
    cout<<"5. ReverseLinkedList\n";
    cout<<"-1. Exit\n";;
}


int main(){
    cout<<"\n\nWELCOME TO LINKED LIST SIMULATOR.\n\n";
    Menu();
    cout<<"Choose an option to start: ";
    int x;cin>>x;
    while(1){
        switch(x){
            case 1:
                InsertAtBeginning();
                break;
            case 2:
                InsertAtPosN();
                break;
            case 3:
                Display();
                break;
            case 4:
                DeleteAtPosN();
                break;
            case 5:
                ReverseLoop();
                break;
            case -1:
            cout<<"\n\nThankYou for using our service\n\n";
                exit(0);
                break;
            default:
                cout<<"\nChoose from given Menu.\n";
				break;
        }
        cout<<endl;
    Menu();
    cout<<"Choose an option to continue: ";
    cin>>x;
    }
    return 0;
}
