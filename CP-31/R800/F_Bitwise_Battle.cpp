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
    int even = 0;
    int odd = 0;
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    sort(arr,arr+n);
    if (!odd or !even)
    {
        cout << -1 ;
    }
    else{
        cout << arr[n-1];
    }
}