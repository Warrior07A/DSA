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
    for(int i=0;i<len;i++)
    {
        freq[s[i] - 'a']++;
    }
    for(int i=0;i<len;i++)
    {
        if (freq[i] > 0)
        {
            if (freq[i] % 2 == 0)
        }
    }
}