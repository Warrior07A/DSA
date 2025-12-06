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
        int a, b,c,d;
        cin >> a >> b >>c >>d;
        int step = 0 ;
        if (d>=b)
        {
            step += (d - b) ;
            a = a + (d - b);
            step += abs(c-a);
            if ( c > a )
            {
                cout << -1 << endl;
                continue;
            }
            cout << step << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}