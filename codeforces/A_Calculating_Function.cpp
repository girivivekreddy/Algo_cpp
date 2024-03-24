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
    ll n;
    cin>>n;
    ll e,o;
    e = n/2;
    o = n - e;
    cout<<(e*(e+1))-(o*o);
   return 0;
}