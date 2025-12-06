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
        int n , m , i , j ;
        cin >> n >> m >> i >> j ;
        if ((i <= n/2 and j >= m/2) or (i <= n/2 and j < m/2)){
            cout << n << " " <<  1 << " " << 1  << " " << m << endl;
        }
        else {
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        }
    }
}