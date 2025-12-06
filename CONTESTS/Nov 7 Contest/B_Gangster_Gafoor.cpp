#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if (n% i==0)
        {
            if ( i == n/i) cnt++;
            else cnt+=2;
        }
    }
    if (cnt ==2) cout << "YES";
    else cout << "NO";
}