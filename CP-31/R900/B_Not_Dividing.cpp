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
        cin>> n;
        int arr[n];
        for(int i=0 ;i < n;i++)
        {
            cin >> arr[i];
        }
        // int cnt = 0;
        for(int i = 0 ;i <n;i++){
            if (arr[i] == 1){
                arr[i]++;
            }
        }
        for(int i = 0 ; i < n - 1; i++)
        {
            if (arr[i+1] % arr[i] == 0)
            {
                arr[i+1]++;
            }
        }
        for( auto i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
        }

}