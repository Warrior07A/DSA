#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if (s.size() <= 10)
        {
            cout << s << endl;
        }
        else{
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        }
    }
}