#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector <int> v;
    set <int> s;
    for(int i=1;i*i<=n;i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto i : s)
    {
        cout << i << " ";
    }
}