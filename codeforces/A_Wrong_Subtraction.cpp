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
    int m,n;cin>>m>>n;

    while(n--){
        (m%10 == 0) ? m/=10 : m--;
    }
    cout<<m<<endl;
   return 0;
}