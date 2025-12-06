#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int max = 0;
    for(int i=0;i<m;i++)
    {
        // cout << arr[i] << " ";
        if(arr[i]<=0) max+=arr[i];
    }
    cout << abs(max);
}
