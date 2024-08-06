#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll s, m;
        cin >>n>>s>>m;

        vector<pair<ll,ll>> tasks(n);
        for (int i=0; i<n;++i) {
            cin >> tasks[i].first >>tasks[i].second;
        }
        sort(tasks.begin(),tasks.end());

        bool cS = false;
        if (tasks[0].first >= s) {
            cS = true;
        }
        for (int i = 1; i < n && !cS; ++i) {
            if (tasks[i].first - tasks[i - 1].second >= s) {
                cS = true;
            }
        }
        if (m-tasks[n - 1].second >= s) {
            cS= true;
        }

        cout << (cS?"YES" :"NO") <<endl;
    }
    return 0;
}
