#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[4];
    set<int>s;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);
    }
    cout <<4 - s.size();
}