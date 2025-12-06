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
            cin >> n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            int sum = arr[0];
            for(int i =1;i<n;i++)
            {
                sum &= arr[i];
            }
            cout << sum << endl;
        }
    }