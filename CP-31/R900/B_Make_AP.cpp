#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a , b ,c;
        cin >> a >> b >> c ;
        bool found  = false;

        int a_new = (2 * b) - c;
        if (a_new / a > 0 && a_new % a ==0 )
            found = true;
        
        int b_new = (a + c) / 2;
        if (b_new / b > 0 and b_new % b ==0 && (c-a) % 2 ==0)
            found = true;

        int c_new = (2 * b) - a;
        if (c_new / c > 0 && c_new % c == 0){
            found =true;
    }

        if (found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}