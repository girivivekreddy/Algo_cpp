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
    int m,n;
    cin>>m>>n;int count = 0;
    while(m<=n){
        m*=3;
        n*=2;
        count++;
    }
    cout<<count<<endl;
   return 0;
}#000000
