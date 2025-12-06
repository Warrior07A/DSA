#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int  n , q;
        cin >> n >> q;
        int arr[n];
        int sum = 0;
        int pre_arr[n] = {0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
            pre_arr[i] = sum;
        }   
        

        while (q--)
        {
            int l , r, k;
            cin >> l >> r >> k;
            int finale = 0;
            if ( l != 1){
                finale =  (sum - (pre_arr[r-1] - pre_arr[l-2]) + k * (r - l + 1));
            }
            else{
                finale =  (sum - (pre_arr[r-1]) + k * (r - l + 1));
            }
            if (finale % 2 ==0) cout <<"NO" << endl;
            else cout << "YES" << endl;
        }
    }
}