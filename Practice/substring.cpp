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
    string s = "Geeven";
    string a = "ee";
    int x = s.compare(1,2,a,1,2);
    cout<<x<<endl;
    cout<<s.substr(1,2)<<endl;
   return 0;
}