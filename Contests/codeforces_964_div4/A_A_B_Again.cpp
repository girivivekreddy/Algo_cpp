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
        int count = 0;
        int i;
        cin>>i;
        count = (i%10) + ((i/10)%10);
        cout<<count<<endl;
    }
   return 0;
}