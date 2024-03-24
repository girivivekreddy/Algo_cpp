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
    int n;cin>>n;
    int count=0;
    while(n--){
        int m,n;
        cin>>m>>n;
        if(n-m >= 2) count++;
    }
    cout<<count;
   return 0;
}