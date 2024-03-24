#include <iostream>
using namespace std;

int Factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*Factorial(n-1);
    }
}

int main(){
    int n;
    cout<<"Give me an n: ";
    cin>>n;

    cout<<"Factorial of n is: "<<Factorial(n)<<endl;
    return 0;
}