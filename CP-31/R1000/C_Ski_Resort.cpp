#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
        int n , k ,q;
        cin >> n >> k >> q;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if (arr[i] > q) arr[i] = 0;
            else arr[i] = 1;
        }

        // for(auto i : arr ) cout << i << " ";
        // cout << endl;
        int cnt = 0;
        int total = 0;
        for(int i=0;i<n;i++)
        {
            if (arr[i] == 1){
                cnt++;
            }   
            else{
                if (cnt >=k){
                    int d = cnt - k + 1;
                    total += (d * (d+1))/2;
                }
                cnt = 0;
            }
        }
        if (cnt >=k){
            int d = cnt - k + 1;
            total += (d * (d+1))/2;
        }
        cout << total  << endl;
    }
}