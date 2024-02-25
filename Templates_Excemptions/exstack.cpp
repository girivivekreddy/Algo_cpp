#include <iostream>
using namespace std;
const int MAX = 3;

class Stack{
    private:
        int st[MAX];
        int top;
    public:
        class Range{};
        Stack():top(-1){}
        void push(int var){
            if(top>= MAX -1){
                throw Range();
            }
            st[++top] = var;
        }
        int pop()
        {
        if(top < 0) //if stack empty,
        throw Range(); //throw exception
        return st[top--]; //take number off stack
        }
};

int main(){
    Stack s1;
    try{
        s1.push(11);
s1.push(22);
s1.push(33);
// s1.push(44); //oops: stack full
cout << "1: " << s1.pop() << endl;
cout << "2: " << s1.pop() << endl;
cout << "3: " << s1.pop() << endl;
cout << "4: " << s1.pop() << endl; 
    }

    catch(Stack::Range){
        cout<<"Ex"<<endl;
    }
    cout<<"After or nor"<<endl;return 0;
}