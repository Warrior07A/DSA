#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        int cntr = 0 ;
        bool found = true;
        while(n != 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
                cntr++;
            }
            else if (n <= 0) {
                found = false;
                break;
            }
            else{
                n = n * 6 * 2;
            }
        }
        if (!found){
            cout << -1 <<endl;
        }
        else{
            cout << cntr <<endl;
        }
    }
}