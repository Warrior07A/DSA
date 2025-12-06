#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string t;
    cin >> s >> t;
    reverse(s.begin(),s.end());
    if (s == t)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}