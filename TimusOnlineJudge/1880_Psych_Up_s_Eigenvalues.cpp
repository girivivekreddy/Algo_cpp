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

struct details{
    int n;
    int *arr;
};

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
    details d1,d2,d3;
    cin>>d1.n;

    d1.arr = new int[d1.n];

    for(int i=0;i<d1.n;i++) cin>>d1.arr[i];

    cin>>d2.n;
d2.arr = new int[d2.n];
for(int i=0;i<d2.n;i++) cin>>d2.arr[i];

cin>>d3.n;
d3.arr = new int[d3.n];
for(int i=0;i<d3.n;i++) cin>>d3.arr[i];
   
   vector<int> common;
   for(int i=0;i<max(d1.n,d2.n,d3.n);i++){
        //TODO TRY LATER USING MAP
   }
   return 0;
}