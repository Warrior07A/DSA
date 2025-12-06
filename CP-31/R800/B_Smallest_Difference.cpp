#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int freq[10001]={0};
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            freq[arr[i]]++;
        }
        int ans = 0;
        for(int i=1;i<10001;i++)
        {
            
            ans = max (ans,freq[i]+freq[i-1]);
        }
        cout << ans << endl;
    }
}