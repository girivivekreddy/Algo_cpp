// #include <iostream> //Iterative
// using namespace std;

// int main(){
//     int n,m;
//     cin>>m>>n;
//     while(n!=0){
//         int r = m%n;
//         m = n;
//         n = r;
//     }
//     cout<<"GCD: "<<m<<endl;return 0;
// }

#include <iostream> //Recurssive
using namespace std;

int GCD(int m, int n){
    if(n==0){
        return m;
    }

   return GCD(n,m%n);
}

int main(){
    int m,n;
    cin>>m>>n;
    int result = GCD(m,n);
    cout<<"GCD: "<<result<<endl;return 0;
}