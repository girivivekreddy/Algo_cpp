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
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        int a=0; int b=0;
        for(int j=0;j<5;j++){
            if(s[j]=='A') a++;
            else b++;
        }
        if(a>b) cout<<'A'<<endl;
        else cout<<'B'<<endl;
    }
    
   return 0;
}