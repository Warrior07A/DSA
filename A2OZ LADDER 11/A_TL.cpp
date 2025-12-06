    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define int long long

    signed main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int n , m ;
        cin >> n >> m;
        int corr[n];
        int incorr[m];

        int corr_min = INT_MAX;
        int corr_max = INT_MIN;
        for(int i=0;i<n;i++){
            cin>>corr[i];
            if (corr[i] < corr_min)
            {
                corr_min = corr[i];
            }
            if (corr[i] > corr_max)
            {
                corr_max = corr[i];
            }
        }
        int inc_min = INT_MAX;
        int inc_max = INT_MIN;
        for(int i=0;i<m;i++){
            cin>>incorr[i];
            if (incorr[i] < inc_min)
            {
                inc_min = incorr[i];
            }
            if (incorr[i] > inc_max)
            {
                inc_max = incorr[i];
            }
        }

       if (max ( 2 * corr_min , corr_max) < inc_min)
       {
            int ans = max ( 2* corr_min , corr_max);
            cout << ans;
       }
       else cout << -1;
    }
