#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int cntr = 0;
    for(int i=1;i*i<=n;i++)
    {
        if (n% i ==0)
        {
            if (i == (n/i))
            {
                cntr+=1;
            }
            else{
                cntr+=2;
            }

            // cout << i << " ";
        }
    }
    if (cntr == 2)
    {
        cout << "YES";
    }
    else cout << "NO";
}
