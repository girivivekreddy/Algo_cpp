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
    int n;
    cin>>n;
    while(n--){
        ll a,b;
        cin>>a>>b;
        int t = (a%b!=0)? abs(a-(b*((a/b)+1))): 0;
        cout<<t<<endl;
    }
   return 0;
}