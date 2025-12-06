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
        int n;
        cin>>n;
        int arr[n];
        int even = 0;
        int odd = 0;
        for(int i=0;i<n;i++) cin>>arr[i];
        
        int total = 0;
        int cnt = 1;

        for(int i=1 ;i<n;i++)
        {
            if ((arr[i]%2) == (arr[i-1] % 2))
            {
                cnt++;
            }
            else{
                total+= cnt -1;
                cnt = 1;
            }
        }
        total += cnt -1;
        cout << total << endl;
    }
}