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
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
   return 0;
}