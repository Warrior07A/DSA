#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int g=0;
    for(int i=0;i<n;i++)
    {
        if(i+1==arr[i]) continue;
        else{
            g=gcd(g,arr[i]-(i+1));
        }
    }
    cout<<g<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }
}