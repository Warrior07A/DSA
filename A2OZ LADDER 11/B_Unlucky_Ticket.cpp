#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector <int> v1,v2;
    for(int i=0;i<n;i++){
        v1.push_back(s[i] - '0');
    }
    for(int i=0;i<n;i++){
        v2.push_back(s[i+n]-'0');
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    bool true1 = true;
    bool true2 = true;
    for(int i=0;i<n and true1;i++)
    {
        if (v1[i] <= v2[i] ) true1 = false;
    }
    for(int i=0;i<n and true2;i++){
        if (v1[i]>= v2[i] ) true2 = false;
    }
    if (true1 || true2) cout << "YES";
    else cout << "NO";
}