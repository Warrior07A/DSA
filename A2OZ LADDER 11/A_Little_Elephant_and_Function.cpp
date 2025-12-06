#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n==1) cout << 1 ;
    else if (n==2) cout << 2 << " " << 1;
    else{
        cout << n << " ";
        for(int i=1;i<n;i++)
        {
            cout << i << " ";
        }
    }
}