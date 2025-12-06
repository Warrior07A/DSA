#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    int zero = 0;
    int one = 0;
    bool found = false;
    for(int i=0;i<n;i++)
    {
        
        if (s[i]=='0') {
            zero++;
            one = 0;
        }
        else{
            zero = 0;
            one++;
        }
        // cout << one << " " << zero <<endl;
        if (zero == 7 or one == 7) {
            found = true;
            break;
        }
    }
    if (found) cout <<"YES";
    else cout << "NO";
}