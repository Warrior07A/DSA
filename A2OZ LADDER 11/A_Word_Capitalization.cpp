#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>> s;
    if (islower(s[0])) s[0] = s[0] - 32;
    cout << s;
}