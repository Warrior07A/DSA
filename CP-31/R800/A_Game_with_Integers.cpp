#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if (n % 3 != 0)
        {
            cout << "First";
        }
        else cout << "Second";
        cout << endl;
    }
}