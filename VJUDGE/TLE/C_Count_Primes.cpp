#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool isprime(int i){
    int inner_cnt = 0;
    for(int j = 1;j*j<=i;j++ )
        {
            if (i % j == 0)
            {
                if ( j == i/j) inner_cnt++;
                else inner_cnt+=2;
            }
            
            if (inner_cnt > 2 ) return false;
        }
        if (inner_cnt < 2) return false;
        return true;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin >> n;
    int cnt = 0;
    for(int i =1;i<=n;i++)
    {
        int inner_cnt = 0;
        if (isprime(i)) cnt++;
    }
    cout << cnt;
}