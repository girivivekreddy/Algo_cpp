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
    (n%5>0) ? cout<<(n/5)+1<<endl : cout<<n/5<<endl;
    
   return 0;
}