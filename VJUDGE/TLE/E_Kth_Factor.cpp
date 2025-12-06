#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , k;
    cin >> n >> k;
    set <int> s;
    for(int i =1 ;i*i<=n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            s.insert(n/i);    
        }
    }
    
    if (s.size()<k) cout << -1;
    else{
        int cnt  = 1;
        for(auto it : s)
        {
            if (cnt == k)  cout << it;
            cnt++;
        }
    }
}