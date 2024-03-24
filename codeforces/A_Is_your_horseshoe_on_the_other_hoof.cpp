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
    ll n[4];
    int c = 0;
    cin>>n[0]>>n[1]>>n[2]>>n[3];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(n[i]==n[j] && i!=j && i>j) c++;
        }   
    }
    if(c>3) c=3;
    else if(c==3) c = 2;
    cout<<c;
   return 0;
}