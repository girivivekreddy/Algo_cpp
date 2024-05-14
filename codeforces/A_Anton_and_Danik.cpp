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

    int n;cin>>n;
    string s;
    cin>>s;
    int d=0,a=0;
    n--;
    while(n>=0){
        (s[n]=='A')?a++ : d++;
        n--;
    }
    if(a==d) {cout<<"Friendship"<<endl;
    return 0;}
    (a>d) ? cout<<"Anton" : cout<<"Danik";
    cin.get();
   return 0;
}