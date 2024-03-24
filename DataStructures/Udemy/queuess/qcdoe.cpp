// #include <iostream>
// using namespace std;

// struct queue{
//     int size;
//     int front;
//      int rear;
//     int *q;
// };

// void create(queue *Q){
//     cout<<"\nEnter size limit of queue: ";cin>>Q->size;
//     Q->front = Q->rear = -1;
//     Q->q = new int[Q->size];
//     cout<<"Successfully created.\n";
// }

// void enqueue(queue *Q){
//     if(Q->rear == Q->size - 1){
//         cout<<"Queue is full";
//         return;
//     }
//     Q->rear++;
//     cout<<"Enter element to add in Queue: ";cin>>Q->q[Q->rear];
// }

// void display(queue Q){
//     if(Q.front==Q.rear) {
//         cout<<"Queue is empty.\n";return;
//     }

//     cout<<"Queue is: ";

//     for(int i=Q.front+1;i<=Q.rear;i++){
//         cout<<Q.q[i]<<" ";
//     }
//     cout<<endl;
//     return;
// }

// void dequeue(queue *Q){
//     if(Q->front==Q->rear){
//         cout<<"Queue is empty.\n";return;
//     }
//     Q->front++;
//     cout<<"Element "<<Q->q[Q->front]<<" deleted"<<endl;

// }

// int main(){
//     queue Q;
//     create(&Q);
//     int x=1;

//     while(x){
//             cout<<"Enter 1 to enqueue."<<endl;
//             cout<<"Enter 2 to dequque."<<endl;
//             cout<<"Enter 3 to display."<<endl;
//             cout<<"Enter 0 to exit."<<endl;
//             cout<<"Enter now: ";
//             cin>>x;
//         switch(x){
//             case 1:
//                 enqueue(&Q);
//                 cout<<endl;
//                 break;
//             case 2:
//                 dequeue(&Q);
//                 cout<<endl;
//                 break;
//             case 3:
//                 display(Q);
//                 cout<<endl;
//                 break;
//             case 0:
//             cout<<endl;
//                 break;
//             default:
//                 cout<<"Choose correct option."<<endl;
//                 cout<<endl;
//                 break;
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

class queue{
    private:
        int size;
        int front;
        int rear;
        int *q;
    public:
    queue(){front=rear=0;size=10;q=new int[size];}
    queue(int sz):front(0),rear(0),size(sz),q(new int[size]){}
        void enqueue();
        void dequeue();
        void display();
};



void queue::enqueue(){
    if((rear+1)%size==front){
        cout<<"Queue is full"<<endl;return;
    }
    rear = (rear+1)%size;
    cout<<"Enter element: ";
    cin>>q[rear];
}

void queue::dequeue(){
    if(rear==front){
        cout<<"Queue is empty\n";
        return;
    }
    front = (front+1)%size;
    cout<<"Deleted"<<endl;
}

void queue::display(){
    if(rear==front){
        cout<<"Queue is empty";
        cout<<endl;
        return;

    }
    cout<<"Queue is: ";
    for(int i=front+1;i!=(rear+1)%size;i=(i+1)%size){
        cout<<q[i]<<" ";
    }
    cout<<endl;
}


int main(){
        queue Q(4)
        int x=1;

    while(x){
            cout<<"Enter 1 to enqueue."<<endl;
            cout<<"Enter 2 to dequque."<<endl;
            cout<<"Enter 3 to display."<<endl;
            cout<<"Enter 0 to exit."<<endl;
            cout<<"Enter now: ";
            cin>>x;
        switch(x){
            case 1:
                Q.enqueue();
                cout<<endl;
                break;
            case 2:
                Q.dequeue();
                cout<<endl;
                break;
            case 3:
                Q.display();
                cout<<endl;
                break;
            case 0:
            cout<<endl;
                break;
            default:
                cout<<"Choose correct option."<<endl;
                cout<<endl;
                break;
        }
    }
    return 0;
}