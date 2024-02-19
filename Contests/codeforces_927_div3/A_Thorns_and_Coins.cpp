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
    int t;
    cin>>t;
    while(t--){
        int n,count=0,coin=0;
        
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            
            if(s[i]=='@'){
                coin++;
                count=0;
            }
            else if(s[i]=='*'){
                count++;
                if(count==2) break;
            }
            else{
                count=0;
            }
        }
        cout<<coin<<endl;
    }
   return 0;
}