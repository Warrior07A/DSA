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
        int a ,b;
        cin >> a >> b;
        int diff = abs(a - b);
        cout << diff << " ";
        
        if (a == b) cout << 0 <<endl;
        else 
        {
            cout << min( a % diff, diff - a % diff);
            cout << endl;
        }
    }
}