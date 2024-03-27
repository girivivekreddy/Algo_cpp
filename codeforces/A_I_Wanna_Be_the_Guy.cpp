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
    int *h = new int[n];
    for(int i=0;i<n;i++){
        h[i] = 0;
    }
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int a;cin>>a;
        h[a-1] = 1;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int a;cin>>a;
        h[a-1] = 1;
    }

    int sum=0;
    for(int i=0;i<n;i++){
        if(h[i]==1) sum++;
    }
    if(sum==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

   return 0;
}