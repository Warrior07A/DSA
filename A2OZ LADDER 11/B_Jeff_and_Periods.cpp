#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];
    map<int, set<int>> m;
    vector<pair<int,int>> v;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        m[arr[i]].insert(i + 1);
    }

    // cout << m.size() << endl;

    for (auto &p : m) {
        cout << p.first << " ";

        auto &s = p.second;

        if (s.size() == 1) {
            cout << 0 << endl;
            continue;
        }

        bool ok = true;
        int common_diff = *next(s.begin()) - *s.begin();

        auto it = s.begin();
        auto prev = it;
        it++;

        while (it != s.end()) {
            if (*it - *prev != common_diff) {
                ok = false;
                break;
            }
            prev = it;
            it++;
        }

        if (ok) cout << common_diff << endl;
        else cout << 0 << endl;
    }

    return 0;
}
