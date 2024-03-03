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
    int t;cin>>t;
    while(t--){
        int a;int b[3];
        cin>>a;
            if(a<=28){
            b[0]=1;b[1]=1;b[2]=a-2;
        }
        else if(a<=52){
            b[2] = 26;b[0] =1; b[1] = a - 27;
        
        }
        else if(a<=77){
            b[2] = 26; b[1] = 26; b[0] = a-26-26;
        }
        else{
            b[2] = 26; b[1] = 26; b[0] = 26;
        }

        cout<<char(b[0]+96)<<char(b[1]+96)<<char(b[2]+96)<<endl;
    }
   return 0;
}