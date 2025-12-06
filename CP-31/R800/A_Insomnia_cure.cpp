#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k ,l ,m , n ,d;
    cin >> k >> l >> m >> n >> d;
    int cnt  = 0;
    for(int i=1;i<=d;i++)
    {
        if (i%k == 0 or i%l==0 or i%m==0 or i%n==0 )
        cnt++;
    }
    cout << cnt;
    
}