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

class smallobj{
    private:
        int somedata;
    public:
        void setdata(int n){
            somedata = n;
        }
        void showdata(){
            cout<<somedata<<endl;
        }
};

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
    smallobj obj1;
    obj1.setdata(MOD);
    obj1.showdata();
   return 0;
}