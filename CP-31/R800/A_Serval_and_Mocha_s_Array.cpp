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
        int arr[n];
        bool flag = false;
        for(int i=0;i<n;i++)  cin>>arr[i];    
        for(int i =0 ;i<n;i++)
        {
            for(int j=i+1 ;j < n;j++)
            {
                if (gcd(arr[i],arr[j]) <= 2 ) {
                    flag = true;
                    break;
                }

            }            
            if (flag) break;
        }
        if (flag) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}