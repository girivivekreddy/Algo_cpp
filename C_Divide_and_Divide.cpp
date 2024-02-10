#include <iostream>
using namespace std;


long long ans(long long num){
    if(num<2){
        return 0;
    }long long a;
    if((num%2) ==0 ){
        a = num/2;
    }else{
        a = num/2 +1;
    }
    return num+ans((num/2))+ans(a);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long num,sum=0;
    cin>>num;
    
    cout<<sum<<endl;
    return 0;
}