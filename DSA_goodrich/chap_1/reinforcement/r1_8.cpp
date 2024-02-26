/*Write a short C++ function, isMultiple, that takes two positive long values,
n and m, and returns true if and only if n is a multiple of m, that is, n = mi
for some integer i.
*/
#include <iostream>
using namespace std;

bool isMultiple(long n, long m){
    return (n%m==0) ? true : false;
}

int main(){
    long n,m;
    cin>>n>>m;
    bool res = isMultiple(n,m);
    cout<<boolalpha<<res<<endl;
    return 0;
}