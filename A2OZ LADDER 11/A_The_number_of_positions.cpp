#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    for(int i=1;i<=n;i++)
    {
        int left = i-1;
        int right = n - 1 - left;
        if (left >=a and right <= b)  cnt++;
    }    
    cout << cnt;
}