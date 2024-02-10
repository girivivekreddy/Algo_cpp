#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> memo;
long long ans(long long num) {
    if (num < 2) {
        return 0;
    }
    if (memo.find(num) != memo.end()) {
        return memo[num];
    }
    long long a;
    if (num % 2 == 0) {
        a = num / 2;
    } else {
        a = num / 2 + 1;
    }
    long long result = num + ans(num / 2) + ans(a);
    memo[num] = result;
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long num, sum;
    cin >> num;
    sum = ans(num);
    cout << sum << endl;

    return 0;
}
