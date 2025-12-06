#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    int index[n+1]={0};
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        index[arr[i]] = i;
    }    
    int m;
    cin >> m;
    int cnt1 = 0;
    int cnt2 = 0;
    while(m--)
    {
        int b;
        cin >> b;
        cnt1 += index[b] + 1 ;
        cnt2 += n - (index[b]+1) + 1 ; 
    }
    cout << cnt1 << " " << cnt2 ;
}