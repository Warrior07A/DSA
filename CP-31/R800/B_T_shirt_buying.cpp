#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define int long long

struct ts {
    int p;
    int a;
    int b;
};

void solve() 
{
    int n; cin >> n;
    vector<ts> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].p;
    }
    for (int i = 0; i < n; ++i) {
        cin >> v[i].a;
    }
    for (int i = 0; i < n; ++i) {
        cin >> v[i].b;
    }
    int m; cin >> m;
    vector<int> check(m);
    for (int i = 0; i < m; ++i) {
        cin >> check[i];
        bool found = false;
        int min = INT_MAX, minj = 0;
        for (int j = 0; j < v.size(); ++j) {
            if (check[i] == v[j].a || check[i] == v[j].b) {
                found = true;
                if (v[j].p < min) {
                    min = v[j].p;
                    minj = j;
                }
            }
        }
        if (found) {
            check[i] = min;
            v.erase(v.begin() + minj);
        }
        else check[i] = -1;
    }
    for (int i = 0; i < m; ++i) {
        cout << check[i] << ' ';
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}