#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int arr[n];
        vector <int> v(1000,0);

        for(int i =0;i<n;i++)
        {
            cin>>arr[i];
            v[arr[i]]++;
        }
        if (v[arr[0]]==n)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            reverse (arr,arr+n);
            cout << arr[n-1] << " ";
            for(int i= 0 ;i <n-1 ;i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}