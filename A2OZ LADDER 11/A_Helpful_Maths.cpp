#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    vector<int>v;
    for(int i=0;i<s.size();i+=2){
        v.push_back(s[i] - '0');
    }
    sort(v.begin(),v.end());
    int len = v.size();
    for(int i=0;i<len;i++)
    {
        if (i==v.size() - 1) cout << v[i];
        else cout << v[i] << "+";
    }

}