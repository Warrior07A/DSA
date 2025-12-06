#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n >> k;
    int i;
    int cnt =1;
    bool found = false;
    for(i = 1; i*i<=n;i++)
    {
        if (n % i == 0)
        {
            if (cnt == k)
            {
                cout << i << " ";
                found = true;
            }
            cnt++;
        }
    }
    for(i; i >=1;i--)
    {
        if (i == n/i) continue;
        else{
            if (n % i == 0)
            {
                if (cnt == k)
                {
                    cout << n/i << " ";
                    found = true;
                }
                cnt++;
            }
        }
    }
    if (!found) cout << -1 ;
}