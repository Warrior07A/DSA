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
        bool found = false;
        for(int i=1;i<1000;i++)
        {
            if (n==pow(2,i))
            {
                found = true;
                break;
            }
        }
        if (found) cout << "NO"<<endl;
        else cout <<"YES"<<endl;
    }
}