#include <iostream>
using namespace std;

struct Node{
    Node *lchild;
    int data;
    Node *rchild;
};


struct Queue{
    int size;
    int front;
    int rear;
    Node **Q;
};

void createqueue(struct Queue *q,int size){
    q->size = size;
    q->front=q->rear=0;
    q->Q = new Node*[q->size];
}

void enqueue(Queue *q,Node *var){
    if(((q->rear+1)%q->size)==q->front){
        cout<<"Queue is FULL\n";
        return;
    }
    else{
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = var;
    }
}

Node *dequeue(Queue *q){
    if(q->rear==q->front){
        cout<<"Queue is Empty\n";
        return;
    }
    else{
        Node* x=q->Q[q->front];
        q->front=(q->front+1)%q->size;
        return x;
    }
}

int queueisEmpty(Queue q){
    return q.front==q.rear;
}

int queueisFull(Queue q){
    return (q.rear+1)%q.size == q.front;
}

struct Node* root = NULL;

void create(){
    struct Node *p,*t;
    int x;
    struct Queue q;
    createqueue(&q,100);

    cout<<"Enter root value: ";
    cin>>x;
    root = new Node;
    root->data = x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    
}

