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
        string s;
        cin >> n >> s;
        int cnt = 1;
        int max_lngth = 0;
        for(int i=0 ; i < n-1 ;i++)
        {
            if (s[i] == s[i+1]) cnt++;
            else  {
                max_lngth = max ( cnt , max_lngth);
                cnt = 1;
            }
        }
        max_lngth = max(cnt , max_lngth);
        cout << max_lngth + 1 <<endl;
    }
}