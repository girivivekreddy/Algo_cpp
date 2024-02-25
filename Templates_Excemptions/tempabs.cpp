#include <iostream>
using namespace std;

template <class T>
T abs(T n){
    return (n<0) ? -n : n;
}

int main(){
    int a = -5;
    float b = -10;
    double d = 21;

    cout<<abs(a)<<" "<<abs(b)<<" "<<abs(d)<<endl;
    return 0;
}