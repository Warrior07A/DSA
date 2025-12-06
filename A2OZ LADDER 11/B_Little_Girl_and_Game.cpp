#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int freq[26]={0};
    int len = s.size(); 
    int cnt = 0;
    for(int i=0;i<len;i++)
    {
        freq[s[i]-'a']++;
    }
    for(auto i : freq)
    {
        if (i > 0)
        {
            if (i % 2 == 1) cnt++;
        }
    }
    // cout << cnt;
    if (cnt % 2 == 1 or cnt == 0)
    {
        cout << "First";
    }
    else cout << "Second";
}