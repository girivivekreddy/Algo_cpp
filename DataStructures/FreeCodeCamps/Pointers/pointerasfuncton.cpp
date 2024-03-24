#include <iostream>
using namespace std;

void Increment(int *a){
    *a=*a+1;

}

int main(){
    int a = 10;
    Increment(&a);
    cout<<a<<endl;
    return 0;
}