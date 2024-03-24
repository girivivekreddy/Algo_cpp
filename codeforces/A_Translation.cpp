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
   string s1;cin>>s1;
    string s2;cin>>s2;
    if(s1.size()!=s2.size()){
        cout<<"NO";return 0;
    }
    for(int i = 0,j=s1.size()-1;i<s1.size();i++,j--){
        if(s1[i] != s2[j]){
            cout<<"NO";return 0;
        }
    }
    cout<<"YES";
   return 0;
}