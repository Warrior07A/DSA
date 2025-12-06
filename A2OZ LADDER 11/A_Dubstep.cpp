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
    string s1="";
    bool found = false;
    for(int i=0;i<n;i++)
    {
        // cout << i << " ";
        if (i<n-2)
        {
            if (s[i]=='W' and s[i+1] == 'U' and s[i+2] == 'B') {
                if (found) s1 +=" ";
                i+=2;
                found = false;
                continue;
            }
            else {
                found = true;
                s1+=s[i];
            }
        }
        else {
            s1+=s[i];
        }
    }
 
    cout << s1;
}