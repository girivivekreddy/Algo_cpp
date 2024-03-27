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
    if(n<26){
        cout<<"NO";
        return 0;
    }
    string s;
    cin>>s;
    int *arr = new int[26];
        for(int i=0;i<26;i++){
        arr[i] = 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]<97) s[i]+=32;
        arr[s[i]-97] = 1;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=1){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
   return 0;
}