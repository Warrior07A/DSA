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
        int n ;
        cin >> n;
        if( (n & n-1) == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
        // cout <<  4 & 3 <<endl;
    }
}