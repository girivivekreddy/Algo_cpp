#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int suneet[2], slavic[2];
        cin >>suneet[0]>>suneet[1];
        cin >> slavic[0]>>slavic[1];
        int sun = 0;
        if (suneet[0] > slavic[0] && suneet[1] > slavic[1]) sun++;
        if (suneet[0] > slavic[1] && suneet[1] > slavic[0]) sun++;
        if (suneet[1] > slavic[0] && suneet[0] > slavic[1]) sun++;
        if (suneet[1] > slavic[1] && suneet[0] > slavic[0]) sun++;
        cout << sun << endl;
    }
    return 0;
}
