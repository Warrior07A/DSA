#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    while(q--)
    {
        int t, l ,r;
        cin >> t >> l >> r;
        if ( l > r)
        {
            cout << 0 ;
        }
        else if (t == 1 )
        {
            if (l == r)
            {
                cout << 0;
            }
            else{
                cout << (r-1) - (l+1) + 1 ;
            }
        }
        else if (t == 2 )
        {
            cout << r-1 - l +1;
        }
        else if ( t == 3)
        {
            cout << r - l+1 - 1;
        }
        else if ( t == 4)
        {
            cout << r - l + 1;
        }
        cout << endl;
    }
}