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
        int n , k;
        cin >> n >> k;
        int arr[n];
        for(int i= 0;i < n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int cnt = 1;
        int largest_cnt = 1;
        for(int i =0 ;i < n-1 ; i++)
        {
            if (arr[i+1] - arr[i] <= k )
            {
                cnt++;
            }
            else{
                cnt = 1;
            }
            largest_cnt = max(cnt,largest_cnt);
        }
        cout<< ( n -largest_cnt)<< endl; 
    }
}