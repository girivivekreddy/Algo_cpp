#include <iostream>
using namespace std;

struct meas{
    int a;
    int b;
};

int main(){
    meas m[3];
    cin>>m[0].a>>m[0].b;
    cin>>m[1].a>>m[1].b;
    cin>>m[2].a>>m[2].b;

    cout<<m[0].a-m[2].a<<" "<<m[0].b-m[1].b<<endl;

    return 0;
}