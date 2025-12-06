#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int  n ,t;
    cin >> n >> t;
    string s;
    cin >> s;
    while(t--)
    {
        for(int i=0;i<s.size()-1;i++)
        {
            if (s[i] == 'B' and s[i+1] == 'G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout << s;
}