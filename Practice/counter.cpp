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

class counter{
    private:
        unsigned int count;
    public:
    counter():count(0){ }
    void inc_count(){count++;}
    void show_count(){cout<<count<<endl;} 
    ~counter(){}
};

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
    counter c1;
    c1.inc_count();
    c1.inc_count();

    c1.show_count();
   return 0;
}