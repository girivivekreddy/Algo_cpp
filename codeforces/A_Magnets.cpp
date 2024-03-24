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
    int g=0;
    int prev=NULL;
    while(n--){
        int t;
        cin>>t;
        if(prev==NULL){
            g++;
            prev = t;
        }
        else if(prev!=t){
            g++;
            prev=t;
        }
    }
    cout<<g<<endl;
   return 0;
}