#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int end_c = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]==2) end_c++;
        }
        int start_c = 0;
        int j = 0;
        bool found = false;
        while(j!=n)
        {
            if (arr[j]==2) 
            {
                start_c++;
                end_c--;
            }
            
            if (start_c == end_c)
            {
                cout << j+1 << endl;
                found = true;
                break;
            }
            j++;
        }
        if (!found) cout << -1 << endl;
    }
}