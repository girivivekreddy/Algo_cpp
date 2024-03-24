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
    int n,h;
    cin>>n>>h;
    int w=0;
    // int *arr = new int[n];
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a>h) w+=2;
        else w+=1;
    }
    cout<<w<<endl;
   return 0;
}