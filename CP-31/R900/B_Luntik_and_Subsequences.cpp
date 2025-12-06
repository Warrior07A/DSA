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
        int c_one = 0;
        int c_zero = 0;
        for(int i = 0 ;i < n;i++)
        {
            cin >> arr[i];
            if (arr[i] == 1) c_one++;
            else if (arr[i] == 0) c_zero++;
        }
        int sum = 1;
        for (int i =0 ;i < c_zero ;i++)
        {
            sum *= 2;
        }
        cout << sum * c_one <<endl;
    }
}