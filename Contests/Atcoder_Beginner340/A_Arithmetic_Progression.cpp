#include <iostream>
using namespace std;

int main(){
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        int A,B,D;
        cin>>A>>B>>D;
        for(A; A<=B; A=A+D){
            cout<<A<<" ";
        }
        return 0;
}