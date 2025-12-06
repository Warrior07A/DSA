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
        int n,m;
        cin>>n >> m;
        string x,s;
        cin >> x >> s;
        int it = 0;
        int cntr = 0;
        bool found = false;
        if (x.find(s) != string::npos){
            cout << cntr << endl;
            continue;
        }
        while(it<=5){
            it++;
            x+=x;
            cntr++;
            if (x.find(s)!= string::npos){
                found = true;
                break;
            }
        }
        if (found) cout << cntr << endl;
        else cout << -1 << endl;
    }
}