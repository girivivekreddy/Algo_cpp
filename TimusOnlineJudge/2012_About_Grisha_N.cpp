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
    int num;
    cin>>num;
    int dur = 240;
    int rem = 12 - num;
    while(rem){
        dur = dur - 45;
        rem--;
    }
    if(dur>=0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   return 0;
}