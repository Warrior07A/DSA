#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    int arr[m];
    for(int i=0;i<m;i++) cin >> arr[i];
    sort(arr,arr+m);
    int mini =  INT_MAX;
    // for(auto i : arr) cout << i << " ";
    // cout << endl;
    for(int i=0;i<m-n+1;i++)
    {
        // cout << arr[i] << " " << arr[i+n -1] ;
        mini = min(mini,arr[i+n-1] - arr[i]);
        // cout << mini << endl;
    }
    cout << mini;

}