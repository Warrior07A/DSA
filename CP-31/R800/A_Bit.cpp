#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cnt = 0;
    while(n--)
    {
        string s;
        cin>>s;
        if (s[0] =='+')
        {
            ++cnt;
        }
        else if (s[s.size()-1] == '+')
        {
            cnt++;
        } 
        else if (s[0] == '-')
        {
            --cnt;
        }
        else if (s[s.size()-1] == '-') cnt--;
    }
    cout << cnt;
}