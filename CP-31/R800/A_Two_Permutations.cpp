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
        int n , a, b;
        cin >> n >> a >> b;
        if (n==a and a==b) cout << "Yes" << endl;  //both permutations p and q gets same here idk why that happens here ?
        else if (n - 2 >= a + b) cout << "Yes" << endl;
        else  cout << "No" << endl;
    }
}