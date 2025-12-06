#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int upper = 0;
    int lower = 0;
    for(int i=0;i<s.size();i++)
    {
        if (isupper(s[i])) upper++;
        else lower++;
    }
    if (upper > lower)
    {
        for(int i=0;i<s.size();i++)
        {
            if (isupper(s[i])) continue;
            else  s[i] = char(s[i] - 32);
        }
    }
    else{
        for(int i=0;i<s.size();i++)
        {
            if (islower(s[i])) continue;
            else s[i] = char(s[i] + 32);
        }
    }
    cout << s;
}