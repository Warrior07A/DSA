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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector <int> v;
        v.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if (arr[i-1] < arr[i]){
                v.push_back(arr[i]);
            }
            else{
                v.push_back(arr[i]);
                v.push_back(arr[i]);
            }
        }
        cout << v.size() << endl;
        for(auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}