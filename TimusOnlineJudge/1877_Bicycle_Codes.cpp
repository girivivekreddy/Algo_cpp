#include <iostream>
using namespace std;

int main(){
    int key1;cin>>key1;
    int key2;cin>>key2;
    if((key1%2==0) || key2%2!=0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}