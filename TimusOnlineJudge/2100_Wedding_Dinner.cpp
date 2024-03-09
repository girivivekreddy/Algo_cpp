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
    int t = 2;
    while(n--){
        string s;
        cin>>s;
        int a = s.find('+');
        if(a!=-1) t+=2;
        else t++;
    }
    if(t==13) t = 14;
    cout<<t*100<<endl;

   return 0;
}