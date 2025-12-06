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
        string s;
        cin >> s;
        int n = s.size();
        for(int i = 0 ;i < n ;i++)
        {
            if (s[0] == s[n-1]) continue;
            else if (s[n-1] == 'b') s[n-1] = 'a';
            else if (s[0] == 'b') s[0] = 'a';
        }
        cout << s << endl;
    }
}