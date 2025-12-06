#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    int n;
    cin >> n; // a^2 + b^2 = c^2 
    int cnt = 0; // 3 4 5 
    for(int i=4;i<n;i++)
    {
        for(int j=3;j<i;j++){
            double h = i*i + j*j;
            if (sqrt(h) == (int)(sqrt(h)) and h <= n*n)cnt++;
        }
    }
    cout << cnt;
    return 0;
}