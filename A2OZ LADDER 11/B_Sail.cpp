#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,x,y,ex,ey;
    string s;
    int N = 0,S = 0,E = 0 ,W = 0;
    cin >> t >> x >> y >> ex >> ey >> s;

    if (ex - x > 0 )     E = ex - x;
    else if (ex - x < 0) W = abs(ex - x);
    if (ey - y > 0)      N = ey - y;
    else if (ey - y < 0) S = abs(ey - y);
    bool found = false;
    int indexN = 0;
    if (N >0)
    {
        int cnt = 0;
        for(int i=0;i<t;i++)
        {
            if (cnt ==N) break;
            if (s[i] == 'N') {
                indexN = i;
                cnt++;
            }       
        }

        if (cnt < N) {
            cout << -1 ;
            return 0;
        }
        // cout << "hello";
    }
    int indexS = 0;
    if (S >0)
    {
        int cnt = 0;
        // cout << "hello";

        for(int i=0;i<t;i++)
        {
            if (cnt == S) break;
            if (s[i] == 'S') {
                indexS = i;
                cnt++;
            }
        }

        if (cnt < S) {
            cout << -1 ;
            return 0;
        }
    }
    int indexW = 0;
    if (W >0)
    {
        // cout << "hello";
        int cnt = 0;
        for(int i=0;i<t;i++)
        {
            if (cnt == W) break;
            if (s[i] == 'W') {
                indexW = i;
                cnt++;
            }
        }
        if (cnt < W) {
            cout << -1 ;
            return 0;
        }
    }
    int indexE = 0 ;
    if (E >0)
    {
        int cnt = 0;
        // cout << "hello";
        for(int i=0;i<t;i++)
        {
            if (cnt ==E) break;
            if (s[i] == 'E'){
                 indexE = i;
                cnt++;
            }
        }
        if (cnt < E) {
            cout << -1 ;
            return 0;
        }
    }
    int last1 = max(indexN,indexE);
    int last2 = max(last1,indexW);
    int last3 = max (last2,indexS);
    cout << last3 + 1;
        
}