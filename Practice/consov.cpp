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

class Distance{
    private:
        int cms;
    public:
        Distance():cms(0){}
        Distance(int n):cms(n){}
        void set_dist(int n){cms = n;}
        void show_dist();
};
void Distance::show_dist(){
    cout<<cms<<endl;
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
    Distance d1;
    Distance d2(2);
    Distance d3;
    d3.set_dist(12);
    d1.show_dist();
    d2.show_dist();
    d3.show_dist();
   return 0;
}