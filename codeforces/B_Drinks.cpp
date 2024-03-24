#include <bits/stdc++.h>  
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <iomanip>
 
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
    int orr = n;
    float frac=0.0;
    while(n--){ 
        float f;
        cin>>f;
        frac+=(f/100.0);
    }

  cout<<setprecision(12)<<fixed<<(frac/orr)*100<<endl;
   return 0;
}