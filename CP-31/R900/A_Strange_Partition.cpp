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
        int n , x ;
        cin >> n >> x;
        int arr[n];
        for(int i = 0 ;i<n;i++)
        {
            cin >> arr[i];
        }
        int max = 0;
        int min = 0;
        for(int i =0;i < n;i++)
        {
            max += ceil(arr[i] * 1.0 / x);
            min += arr[i];
        }
        min = ceil(min * 1.0 / x);
        cout << min << " " << max << endl;
    }
}