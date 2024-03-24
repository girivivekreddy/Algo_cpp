#include <iostream>
using namespace std;

int F[510];


int Fib(int n){
    if(n<=1) return n;
    if(F[n]!=-1) return F[n];
    else{
        F[n] = Fib(n-1) + Fib(n-2);
        return F[n];
    }
}

int main(){

    for(int i=0;i<510;i++) F[i]=-1;
    int n;
    cout<<"Give me a number: ";
    cin>>n;

    cout<<Fib(n)<<endl;

        for(int i=0;i<510;i++) cout<<F[i]<<" ";
    return 0;
}