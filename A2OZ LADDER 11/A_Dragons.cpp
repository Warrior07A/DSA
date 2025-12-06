#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, n;
    cin >> s >> n;
    int loop = n;
    vector<pair<int,int>> v;
    int i = 0;
    while(loop--)
    {
        pair<int,int> p;
        cin >> p.first;
        cin >> p.second;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++)
    {
        if (s<v[i].first)
        {
            cout << "NO";
            return 0;
        }
        s+=v[i].second;
    }
    cout <<"YES";
}