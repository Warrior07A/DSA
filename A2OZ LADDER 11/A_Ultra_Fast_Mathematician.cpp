#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    for(int i =0;i<s1.size();i++)
    {
        cout << (s1[i] ^ s2[i]);
    }
}