#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , k;
    cin >> n >> k;
    int odd_count = (n+1)/2;
    if (k <= odd_count)
    {
        cout << (2 * k) - 1 << endl;
    }
    else{
        cout << (k - odd_count ) *  2 << endl;
    }
    
}