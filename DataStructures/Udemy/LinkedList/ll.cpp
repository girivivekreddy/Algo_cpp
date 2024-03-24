#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL; 
    static Node *last;
void create(int n){
    struct Node *temp;

    
    if(head==NULL){
        head = new Node;
        head->data = n; 
        head->next = NULL;
        last = head;
    }
    else{
        temp = new Node;
         temp->data=n;
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(){
    struct Node* p = head;
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

void insb(int n){
    Node *temp = new Node;
    temp->data = n;
    temp->next = head;
    head = temp;
}

int count(){
    Node *p = head;
    int count=0;
    while(p!=NULL){
        count++;
        p=p->next;
    }
    return count;
}

int sum(){
    Node *p = head;
    int sum=0;
    while(p!=NULL){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

int max(){
    Node *p = head;
    int maxele = p->data;
    while(p!=NULL){
        if(p->data>maxele) maxele = p->data;
        p=p->next;
    }
    return maxele;
}

int search(int n){
    int pos = 0;
    Node *p = head;
    while(p!=NULL){
        if(p->data == n) return pos;
        else{
            p=p->next;
            pos++;
        }
    }
    return -1;
}


void insert(int pos, int value){
    Node *p = head;
    if(pos==0){
        struct Node* temp = new Node;
        temp->data = value;
        temp->next = head;
        head = temp;
        return;
    }

    pos--;
    while(pos--){
        p=p->next;
    }
    struct Node* temp = new Node;
    temp->data = value;

    temp->next = p->next;
    p->next = temp;

}

void deletefirst(){
    Node *p = head;
    head = head->next;
    delete p;
}

void deletepos(struct Node *p, int pos){
    struct Node *prev;
    if(pos==0){
            Node *p = head;
    head = head->next;
    delete p;
    return;
    }
    while(pos--){
        prev = p;
        p = p->next;
    }
    if(p->next == NULL){
        prev->next = NULL;
        delete p;
        last = prev;
    }else{
    prev->next = p->next;
    delete p;
    }


}



int main(){
    int A[] =  {8,3,9,7,6};
    for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
        create(A[i]);
    }



    display();

    cout<<endl;

    cout<<"Inserting..."<<endl<<endl;

    insert(0,1);

    display();
    cout<<endl;

    cout<<"Inserting..."<<endl<<endl;

    insert(3,1);

    display();
    cout<<endl;
    deletefirst();
    display();

    deletepos(head,5);
    display();
    create(100);
    display();
        deletepos(head,5);
    display();
    create(1000);
    display();
    insb(7);
    display();
        insert(7,1212);
        display();
    // insb(10);
    // display();
    // insb(500);
    // display();
    // create(10);
    // display();
    // create(10000);
    // insb(600);
    // display();


    cout<<"count is: "<<count()<<endl;
    // cout<<"sum is: "<<sum()<<endl;
    cout<<"Max element of ll is: "<<max()<<endl;
    // cout<<"search: "<<search(600 )<<endl;
    return 0;
}