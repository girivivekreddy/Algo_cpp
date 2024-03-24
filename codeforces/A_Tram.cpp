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
    int a,b;
    int max=0;
    int sum=0;
    
    while(n--){
        cin>>a>>b;
        sum-=a;
        sum+=b;
        if(sum>max) max = sum;
    }
    cout<<max<<endl;
   return 0;
}