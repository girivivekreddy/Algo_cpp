/*Write a short C++ function that takes an integer n and returns the sum of
all the integers smaller than n.*/

#include <iostream>
using namespace std;

int lns(int num){
    return ((num*(num+1))/2) - num;
}

int main(){
    int num;
    cout<<"Enter a number: ";cin>>num;
    num=lns(num);
    cout<<"The sum of all numbers less than n are: ";
    cout<<num;
    return 0;
}