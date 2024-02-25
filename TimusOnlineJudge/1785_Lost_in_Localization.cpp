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
    int num;
    cin>>num;
    if(num>=1 && num<=4){
        cout<<"few"<<endl;
    }
    else if(num>=5 && num<=9){
        cout<<"several"<<endl;
    }
    else if(num>=10 && num<=19){
        cout<<"pack"<<endl;
    }
    else if(num>=20 && num<=49){
        cout<<"lots"<<endl;
    }
    else if(num>=50 && num<=99){
        cout<<"horde"<<endl;
    }
    else if(num>=100 && num<=249){
        cout<<"throng"<<endl;
    }
    else if(num>=250 && num<=499){
        cout<<"swarm"<<endl;
    }
    else if(num>=500 && num<=999){
        cout<<"zounds"<<endl;
    }
    else{
        cout<<"legion"<<endl;
    }
   return 0;
}