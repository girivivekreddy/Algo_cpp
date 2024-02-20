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
        int n;cin>>n;
        vector<int> ar;
        for(int i=0;i<n;i++){
            int ii;cin>>ii;
            ar.push_back(ii);
        }
        int sum=0;
        for(int i=1;i<=n;i++){
            sum=sum+ar[i-1];
            if(sum!=ar[i] && sum!=0){
                sum = 1; break;
            }
            else if(sum==ar[i] && sum!=0){
                sum = 0; break;
            }

        }
                    if(sum==1){
                cout<<"TRIANGLE"<<endl;
            }else{
                cout<<"SQUARE"<<endl;
            }
    }
   return 0;
}