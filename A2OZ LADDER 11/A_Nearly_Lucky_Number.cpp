#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n  =s.size();
    int cnt = 0;

    for(int i=0;i<n;i++)
    {
        if (s[i] == '4' or s[i] == '7')
        {
            cnt++; 
        }
    }

    bool found = false;
    string lucky = to_string(cnt);
    // cout << lucky;
    
    for(int i = 0; i < lucky.size();i++)
    {
        if (lucky[i] != '4' and lucky[i] != '7')
        {
            // cout << lucky[i]<<" ";
            cout << "NO";
            found = true;
            break;
        }
    }

    if (!found) cout << "YES";
}