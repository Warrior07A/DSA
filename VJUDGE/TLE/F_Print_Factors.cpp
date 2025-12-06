#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int i;
    for(i = 1; i*i<=n;i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    i--;
    for(; i >=1;i--)
    {
        if (i == n/i)
        continue;
        else{
            if (n % i == 0)
            {
                cout << n/i << " ";
            }
        }
    }
}