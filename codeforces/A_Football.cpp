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
    string s;
    cin>>s;
    int count = 0;
    for(int i=1;i<s.size();i++){
        if(count==6) break;
        if(s[i]==s[i-1]) count++;
        else count=0;
    }
    (count>=6) ? cout<<"YES" : cout<<"NO";
   return 0;
}