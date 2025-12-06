#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m ;
    cin >> n >> m ;
    
    int cnt = 0;
    while(n>0 || m>0)
    {
        if (n > m)
        {
            if (n>0){
                cout << 'B' ;
                n--;
            }
            if (m>0){
                cout << 'G';
                m--;
            }
        }
        else{
            if (m>0){
                cout << 'G' ;   
                m--;
            }
            if (n>0){
                cout << 'B';
                n--;
            }
        }
    }
} 