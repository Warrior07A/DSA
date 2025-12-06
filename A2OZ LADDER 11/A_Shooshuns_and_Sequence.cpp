#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , k ;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++) cin>> arr[i];
    k--;
    int unique = arr[k];
    bool found = true;
    for(int i=k;i<n;i++)
    {
        if (arr[i] != unique ) found = false;
    }
    int cntr = -1;
    for(int i=0;i<k;i++)
    {
        if (arr[i] != unique) cntr = i;
    }
    if (found) {
        if (cntr == -1) cout << 0;
        else  cout << cntr+1;
    }
    else cout << -1;

}