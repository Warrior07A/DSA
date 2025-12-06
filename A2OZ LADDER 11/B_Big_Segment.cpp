#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int max = INT_MIN,min = INT_MAX;
    vector<pair<int,int>> v;
    while(n--)
    {
        pair <int,int> p;
        cin >> p.first >> p.second;
        if (p.first < min) min = p.first;
        if (p.second > max) max = p.second;
        v.push_back(p);
    }
    int index  = 0;
    bool found = false;
    int len = v.size();
    for(int i=0;i<len;i++)
    {
        if (v[i].first == min && v[i].second == max){
            found = true;
            index = i+1;
            break;
        }

    }
    if (found) cout << index;
    else cout << -1 ;
}