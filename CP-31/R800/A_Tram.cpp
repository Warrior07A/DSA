#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int min = 0;
    int maxi = 0;
    while(n--)
    {
        int in , out ;
        cin >> in >> out;
        maxi += out - in;
        if (min < maxi)
        {
            min = maxi;
        } 
    }
    cout << min;
}