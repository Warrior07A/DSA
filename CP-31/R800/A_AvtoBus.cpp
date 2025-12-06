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
        cin >> n;
        int min = ceil(n * 1.0 /6); 
        int max = 0;
        
        if (n < 4 || n % 2 == 1)
        {
            cout << -1 << endl;
        }
        else{
            cout << min << " " << n /4 << endl;
        }
    }
}