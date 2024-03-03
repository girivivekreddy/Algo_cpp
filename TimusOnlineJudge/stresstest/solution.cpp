#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int min = (n*2)/k;
    int rem = n - ((min*k)/2);
    cout<<min+(rem*2)<<endl;
    return 0;
}