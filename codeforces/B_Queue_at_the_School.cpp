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
    cin>>m>>n;
    string s;
    cin>>s;
    while(n--){        for(int j = 1;j<m;j++){
            if(s[j-1]=='B' && s[j]=='G'){
                s[j] = 'B';s[j-1] = 'G';
                j++;    
            }
        }}
    cout<<s<<endl;
   return 0;
}