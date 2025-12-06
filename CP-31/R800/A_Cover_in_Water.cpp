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
        cin>>n;
        string s;
        cin>>s;
        bool found = false;
        int dot = 0;
        for(int i = 0; i < n; i++)
        {
            if (s[i] != 0 and s[i] != n-1)
            {
                if (s[i-1]=='.' and s[i]=='.' and s[i+1]=='.')
                {
                    found = true;
                    break;
                }
            }
            if (s[i]=='.') dot++;
        }
        if (found)
        {
            cout << 2 << endl;
        }
        else{
            cout << dot << endl;
        }
    }
}