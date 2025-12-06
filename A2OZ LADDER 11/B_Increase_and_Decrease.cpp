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
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % n == 0 ) cout << n ;
    else cout << n - 1 ;
}