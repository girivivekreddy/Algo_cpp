#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    
    cin>>a>>b>>c;

    int bc = b*c;
    if(a==1 && b==1 && c==1){
        cout<<-1<<endl;
    }
    else if(b==1){
        cout<<a-b-c<<endl;
    }
    else if(a==0 && b==0 && c!=0){
        cout<<-c<<endl;
    }
    else {cout<<a-bc<<endl;}

    return 0;
}