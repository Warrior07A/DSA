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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int maxFreq = 1, currFreq = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i-1])
                currFreq++;
            else
                currFreq = 1;
            maxFreq = max(maxFreq, currFreq);
        }

        int ans = 0;
        int temp = maxFreq;

        while (temp < n) {
            ans += temp + 1;
            temp += temp;
        }

        cout << ans + n - temp << endl;
    }
}
