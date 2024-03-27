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
    int counter = 2;
    for(int i=0;i<m;i++){
        if(i%2!=0) counter--;
        for(int j=0;j<n;j++){
            if(i%2==0){
                cout<<'#';
            }
            else{
                if(counter==1){
                    if(j==n-1) cout<<"#";
                    else cout<<".";
                }
                else{
                    if(j==0) cout<<"#";
                    else cout<<".";
                }
            }
        }
        cout<<endl;
        if(counter==0) counter = 2;
    }
   return 0;
}