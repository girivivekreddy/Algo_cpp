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
   for(int i=1;i<=n;i++){
      if(i%2!=0){
         cout<<"I hate";
      }
      else cout<<"I love";
      if(i==n) cout<<" it";
      else cout<<" that ";
   }
   return 0;
}