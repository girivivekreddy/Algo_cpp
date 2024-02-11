#include <iostream>
#include <vector>
using namespace std;

int main(){
    int nq;cin>>nq;
    vector<int> data;

    int q1,q2;
    while(nq--){
        cin>>q1>>q2;
        if(q1==1){
            data.push_back(q2);
        }
        else if(q1==2){
            cout<<data[data.size()-q2]<<endl;
        }
    }
    return 0;
}