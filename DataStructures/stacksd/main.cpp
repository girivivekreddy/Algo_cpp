#include <iostream>
using namespace std;

struct Stack{
    int size;
    int top;
    int *s;
};





void create(Stack *st){
    cout<<"Enter size of stack: ";cin>>st->size;
	if(st->size<1){
	cout<<"Invalid size."<<endl;
	exit(-1);
}

    st->top = -1;
    st->s = new int[st->size];
}

void push(Stack *st){
    
    if(st->top==st->size -1){
        cout<<"Stack is FULL."<<endl;return;
    }
    st->top++;
    int x;cout<<"Enter a value to push into array: ";cin>>x;
    st->s[st->top] = x;
    cout<<x<<" added to stack.";
}

void display(Stack st){
    if(st.top==-1){
        cout<<"Stack is EMPTY."<<endl;return;
    }
    cout<<"Stack is: ";
    for(int i=st.top;i!=-1;i--){
        cout<<st.s[i]<<" ";
    }
    cout<<endl;

}

void pop(Stack *st){
    if(st->top == -1){
        cout<<"Stack is EMPTY"<<endl;return;
    }
    cout<<"Removed element "<< st->s[st->top]<<".\n";
    st->top--;
}

void peek(Stack st){
    if(st.top==-1){
        cout<<"Stack is EMPTY."<<endl;return;
    }
    cout<<"Enter index of stack to peek: ";int x;cin>>x;
    x--;
    if(x>st.top){
        cout<<"There are only "<<st.top+1<<" elements in stack."<<endl;
        return;
    }
    cout<<"Element found at stack location "<< x+1 <<" is "<<st.s[st.top-x]<<endl;
}

int main(){
    Stack s;
    cout<<"\n\n***********************************************************************"<<endl;
    cout<<"\nWelcome to STACK datastructure....."<<endl<<endl;
    cout<<"***********************************************************************\n"<<endl;

        create(&s);
        cout<<"A stack of size "<<s.size<<" created.";
        cout<<endl;
        cout<<"\n***********************************************************************\n"<<endl;
    while(1){
        cout<<"MENU to proceed:"<<endl;
        cout<<"\n1. Push"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Pop"<<endl;
        cout<<"4. Peek"<<endl;
        cout<<"-1. Exit"<<endl;
        cout<<"\nSelect an option to get started: ";
        int option;cin>>option;
        cout<<endl;
        switch(option){
            case 1:
                push(&s);
                cout<<"\n***********************************************************************\n"<<endl;
                break;
            case 2:
                display(s);
                cout<<"\n***********************************************************************\n"<<endl;
                break;
            case 3:
                pop(&s);
                cout<<"\n***********************************************************************\n"<<endl;
                break;
            case 4:
                peek(s);
                cout<<"\n***********************************************************************\n"<<endl;
                break;
            case -1:
                cout<<"Thanks for using our service."<<endl;
                cout<<"\n***********************************************************************\n"<<endl;
                exit(0);
            default:
            cout<<"\n***********************************************************************\n"<<endl;
                cout<<"Choose options from MENU provided."<<endl;
            cout<<"\n***********************************************************************\n"<<endl;
        }
    }
    return 0;
}
