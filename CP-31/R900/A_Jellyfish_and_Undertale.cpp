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
        int a ,b ,n;
        cin>>a >> b >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(int i =0 ;i < n ;i++)
        {
            if (arr[i] < a)
            {
                sum += arr[i];
            }
            else if(arr[i] == a)
            {
                sum += arr[i]-1;
            }
            else{
                sum += (a-1);
            }
        }

        cout<< sum + b << endl;
        // if( b >1)
        // {
        //     cout << sum + b << endl;
        // }
        // else{
        //     cout << sum << endl;
        // }
    }
}