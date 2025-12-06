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
        int n, k , x;
        cin>> n >> k >> x;
        int small = (k*(k+1))/2;

        int f_large = (n*(n+1))/2;
        int back_large = ((n-k)*(n-k+1))/2;
        int large=f_large - back_large;
        // cout<<small<<" "<<large;
        // cout<<endl;
        
        if (x >= small and x <= large )
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}