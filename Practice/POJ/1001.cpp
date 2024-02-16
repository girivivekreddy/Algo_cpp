//  
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
    float s;int c;long double d;
    while(cin>>s>>c){
        d=pow(s,c);

        cout<<d<<endl;
    }
   return 0;
}