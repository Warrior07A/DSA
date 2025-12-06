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
        for(int i =0 ;i < n;i++)
        {
            cin >> arr[i];
        }
        bool found = false;
        for(int i = 1 ; i < n - 1;i++)
        {
            if (arr[i-1] < arr[i] and arr[i] > arr[i+1]){
                cout << "YES" << endl;
                cout << i  << " "<< i+1 << " " << i+2 << endl;
                found = true;
                break;
            }
            
        }
        if (!found)  cout << "NO" << endl;
    }

}