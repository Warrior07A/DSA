#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int sum = 0;
    double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    cout << fixed  << setprecision(12)<< (sum * 1.0/n * 1.0 );
    // cout <<setprecision(10)<< result;
}