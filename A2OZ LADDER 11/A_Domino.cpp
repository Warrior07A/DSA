#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int upper = 0;
    int lower = 0;
    int n_pair = 0;
    while(n--)
    {
        int l,r;
        cin >> l >> r;
        upper += l;
        lower += r;
        if (l % 2 == 0 and r % 2 ==1) n_pair++;
        else if (l % 2 == 1 and r % 2 == 0) n_pair++;
    }
    if (upper % 2 == 1 and lower % 2 == 1) {
        if (n_pair == 0 or n_pair % 2 ==1) cout << -1;
        else  cout << 1;
    }
    else if (upper % 2 == 0 and lower % 2 == 0) cout << 0;
    else cout << -1;

    return 0;
}                                                                                                                                                                