#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >>n ;
        string s;
        cin >> s;
        int l = s.size();
        int j = 0 ;
        int cntr = 0;
        while(s != "")
        {
            if ((s[s.size()-1]== '0' and s[0] == '1') or (s[0] == '0' and s[s.size()-1] == '1'))
            {
                s.erase(s.size()-1,1);
                s.erase(0,1);
                // j++;
                cntr += 2;
                // cout << s << endl;
                continue;
            }
            break;
            
        }
        cout << l - cntr << endl;
    }
}