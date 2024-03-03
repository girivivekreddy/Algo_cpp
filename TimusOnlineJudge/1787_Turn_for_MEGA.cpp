#include <iostream>
#include <vector>
#include <algorithm>  // Include the algorithm header for using the max function

using namespace std;

int main() {
    long long k, n;
    cin >> k >> n;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(sum==0 && a<=k) sum=0;
        else if(sum==0 && a>k) sum = max(0LL,a-k);
        else if(sum!=0 && a<=k) sum= max(0LL,(a+sum) - k);
        else if(sum!=0 && a>k) sum = max(0LL,(a+sum) - k);
    }

    cout<<sum<<endl;



    return 0;
}
