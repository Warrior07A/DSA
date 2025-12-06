#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

/*
    (x+y) <= n;
    (x+y) % k == 0;
    y, k, n

    10 6 40

*/

void solve()
{
    int n, y, k; cin >> y >> k >> n;
    int start;
    if ((y + (y % k)) % k == 0) start = y % k; // 10 + (10 % 6) % k == 0 -> false
    else start = k - (y % k); // 6 - (4) = 2

    if (start == 0) start = k;

    vector<int> ans;
    for (int i = start; i + y <= n; i += k) {
        if (i + y > n) break;
        else ans.push_back(i);
    }

    if (ans.size() == 0) cout << -1;
    else {
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << ' ';
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while (t--) solve();
}