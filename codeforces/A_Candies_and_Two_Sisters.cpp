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

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        if(a<=2){
            cout<<0<<endl;
        }
        else{
            if(a%2!=0) cout<<a/2<<endl;
            else cout<<(a/2)-1<<endl;
        }
    }
   return 0;
}