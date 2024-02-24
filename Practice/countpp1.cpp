#include <bits/stdc++.h>  
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <process.h> 
using namespace std;
 
typedef long long ll;
ll MOD = 1000000007;
#define endl '\n'


class counter{
    private:
        unsigned int count;
    public:
        counter(): count(0){}
        unsigned int get_count(){
            return count;
        }
        void operator ++(){
            ++count;
        }
        void operator --(){
            --count;
        }
};

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
    counter c1;
    ++c1;
    ++c1;
    --c1;
    --c1;
    cout<<c1.get_count()<<endl;
   return 0;
}