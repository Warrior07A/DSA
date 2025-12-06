#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    bool found = false;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]== 'H' or s[i] == 'Q' or s[i] =='9')
        found = true;
    }
    if (found) cout << "YES"<<endl;
    else cout << "NO" << endl;
}