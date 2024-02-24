#include <iostream>
#include <vector>
#include <bitset>
#include <climits>
#include <limits>
using namespace std;

int tsp(int n, vector<vector<int>>& distance, int start) {
    vector<vector<int>> dp(1 << n, vector<int>(n, 0));
    dp[1 << (n - 1)][start] = 0;
    for (int subsetSize = 2; subsetSize <= n; ++subsetSize) {

        for (int subset = 0; subset < (1 << n); ++subset) {

            if (__builtin_popcount(subset) != subsetSize) continue;

            for (int end = 0; end < n; ++end) {

                if (!(subset & (1 << end))) continue;
                int minDistance = numeric_limits<int>::max();
                for (int city = 0; city < n; ++city) {
                    if (city == end) continue;
                    if (!(subset & (1 << city))) continue;
                    minDistance = min(minDistance, dp[subset - (1 << end)][city] + distance[city][end]);
                }
                dp[subset][end] = minDistance;
            }
        }
    }

    int minDistance = numeric_limits<int>::max();
    for (int end = 0; end < n; ++end) {
        minDistance = min(minDistance, dp[(1 << n) - 1][end] + distance[end][start]);
    }
    return minDistance;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> distance(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> distance[i][j];
        }
    }
    int start;
    cin >> start;

    cout << "Shortest distance: " << tsp(n, distance, start - 1) << endl;

    return 0;
}

