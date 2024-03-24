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
    int k,n,w;
    cin>>k>>n>>w;
    float tprice = ((float)w/2.0)*((2*k)+((w-1)*k));
    (tprice > n) ? cout<<(int)(tprice-n)<<endl : cout<<0<<endl;;
   return 0;
}