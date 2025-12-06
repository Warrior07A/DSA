#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m ;
    cin >> n >> m;
    vector<int> arr(n);
    bool max_exist = false;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] > m) max_exist = true;
    }
    int maxx = INT_MIN;
    int maxi = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] % m == 0)  arr[i] = arr[i] / m;
        else if (arr[i] > m) arr[i]  = (arr[i] / m) + 1;
        else arr[i] = 1;
        
        if (arr[i] >= maxx) {
            maxx = arr[i];
            maxi = i + 1;
        }
    } 
    cout << maxi;
}