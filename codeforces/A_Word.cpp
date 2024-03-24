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
    string s;cin>>s;
    int lc=0,uc=0;
    for(int i=0;i<s.size();i++){
        (s[i]>=97) ?lc++ : uc++;
    }
    if(lc>=uc){
        for(int i=0;i<s.size();i++){
            if(s[i]<97) s[i]+=32;
        }
    }
    else{
                for(int i=0;i<s.size();i++){
            if(s[i]>90) s[i]-=32;
        }
    }
    cout<<s<<endl;
   return 0;
}