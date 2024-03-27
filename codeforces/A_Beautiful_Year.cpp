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

bool isdistinct(int n){
   stringstream stream;
   stream << n;
   string s;
   stream >> s;
   if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3]){
      return true;
   }
   return false;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
    int n;cin>>n;
    n++;
   while(isdistinct(n)==false){
      n=n+1;
   }
   cout<<n<<endl;
   return 0;
}