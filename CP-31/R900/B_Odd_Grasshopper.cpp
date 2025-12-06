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
        int x, n;
        cin >> x >> n;
        int rem = n % 4;
        if (x % 2 != 0)
        {   
            if(rem == 0) cout << x <<endl;
            else if (rem == 1) cout << (x + n)<<endl;
            else if (rem == 2) cout << x + (n-1) - (n) << endl;
            else if (rem == 3) cout << x + (n-2) - (n-1) - (n) << endl;
            
        }
        else{
            if (rem  == 0)
            {
                cout << x << endl;
            }
            else if (rem == 1) cout << (x - n)<<endl;
            else if (rem == 2) cout << x - (n-1) + (n) << endl;
            else if (rem == 3) cout << x - (n-2) + (n-1) + (n) << endl;
        }
    }

}