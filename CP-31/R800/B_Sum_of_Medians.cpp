#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n * k);
    for(int i = 0; i < n * k; i++) cin >> a[i];
    int f_step = n * k - n / 2 - 1;
    int m = (n + 1)/2;
    int sum = 0;
    // int cntr = 0;
    for(int i=f_step ;i>=0 ;i -= n)
    // {   if(cntr > k) break;
        sum += a[i];
        // cntr++;
        cout << sum << endl;
    }


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }
}