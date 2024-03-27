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
    int sum = 0;
    int n;
    cin>>n;
    while(n--){
        string s;cin>>s;
        if(s=="Tetrahedron") sum+=4;
        else if(s=="Cube")  sum+=6;
        else if(s=="Octahedron")sum+=8;
        else if(s=="Dodecahedron")sum+=12;
        else    sum+=20;
        
    }
    cout<<sum<<endl;
   return 0;
}