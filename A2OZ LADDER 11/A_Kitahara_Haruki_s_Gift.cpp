#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    int one =0,two = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if (arr[i] ==100 ) one++;
        else two++;
    }
    if (one <2 or two<2)
    one = one - 2*two;
    // cout << one << " " << two;
    if (one % 2 ==0) cout <<"YES";
    else cout << "NO";
}