#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    bool not_poss = false;
    if (n % 2 != 0) n++;
    for(auto i : m)
    {
        if (i.second > n/2){
            not_poss = true;
            break;
        }
    }
    cout << (not_poss ? "NO" : "YES");
}