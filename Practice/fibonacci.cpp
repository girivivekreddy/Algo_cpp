#include <iostream> 
using namespace std;

// int fibonacci(int n){ //recursive approach
//     if(n<=1) return n;
//     return fibonacci(n-1) + fibonacci(n-2);
// }

int fibonacci(int n){ //iterative approach
    if(n<=1){
        return n;
    }
    int a=0,b=1,nxtrm;
    for(int i=2;i<=n;i++){
        nxtrm = a+b;
        a = b;
        b = nxtrm;
    }
    return b;
}

int main(){
    cout<<"Enter number: ";
    int n;
    cin>>n;
    cout<<"Fibonacci series for "<<n<<" numbers is: ";
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    return 0;
}
