#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    while(q--)
    {
        int l , r;
        cin>>l >> r;
        cout << (r*(r+1))/2 - (l*(l-1)/2) << endl;
    }
}