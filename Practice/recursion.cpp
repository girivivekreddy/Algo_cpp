#include <bits/stdc++.h>  
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
 
using namespace std;
 
typedef long long ll;
ll MOD = 1000000007;
#define endl '\n'

void funcB(int);

void func(int);


int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
    func(3);
   return 0;
}

void funcB(int n){
    if(n>1){
        cout<<n<<endl;
        func(n/2);
    }
}

void func(int n){
    if(n>0){
        cout<<n<<endl;
        funcB(n-1);
    }
}
