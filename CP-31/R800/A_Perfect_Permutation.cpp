#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        
        for(int i = 1;i <= n;i+=2)
        {
            cout << i+1 << " " << i << " ";
        }
    }
    else{
        cout << -1 ;
    }
}