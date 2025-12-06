#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int t = n;
    int cnt = 0;
    while (t--)
    {
        int finger;
        cin >> finger;
        cnt += finger;
    }
    int ways = 0;
    for (int i = 1; i <= 5; i++) {
        if ((cnt + i) % (n+1) != 1) ways++;
    }

    cout << ways;
}
