#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    
    int m ;cin >> m;
    int arr2[m];
    for(int i=0;i<m;i++) cin >> arr2[i];
    
    map <int,int> m1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int whole_no = (arr2[j] % arr[i]); 
            if (whole_no == 0)
            {
                m1[(arr2[j] / arr[i])]++;
            }
        }
    }
    int max = 0;
    int gear;
    int cnt = 1;
    int map_size = m1.size();
    for(auto i : m1)
    {
        if (cnt == map_size ) cout << i.second; 
        cnt++;
    }

}