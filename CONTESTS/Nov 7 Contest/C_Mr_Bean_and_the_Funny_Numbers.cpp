#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    bool found = false;
    int arr[14]={4,7,44,47,74,77,444,447,474,477, 744, 747, 774, 777};
    for(int i=0;i<14;i++)
    {
        if(n % arr[i] ==0)
        {
            found = true;
            break;
        }
    }
    if (found) cout <<"YES";
    else cout <<"NO";
}