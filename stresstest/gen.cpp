#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
ll random(ll a, ll b){
    if(a>b) return 0;
    return a+rng()%(b-a+1);
}

int main(){
    int n = random(1,1000);
    cout<<n<<"\n";
    int m = random(1,1000);
    cout<<m<<"\n";
}