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
    string s1,s2;
    cin>>s1>>s2;
    string s3="";
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]) s3+='0';
        else s3+='1';
    }
    cout<<s3<<endl;
   return 0;
}