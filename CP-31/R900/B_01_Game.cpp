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
        int s_one  = 0;
        int s_zero = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '0')
            {
                s_zero++;
            }
            else{
                s_one++;
            }
        }

        int mini = min(s_zero , s_one);
        if (mini % 2 == 0) cout << "NET" << endl;
        else cout << "DA" << endl;
    }
}