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
    string s;cin>>s;
    int count=0;
    for(int i=1;i<=n;i++){
        if(s[i-1]==s[i]){
            count++;
        }
    }
    cout<<count<<endl;
   return 0;
}