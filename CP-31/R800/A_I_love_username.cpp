#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]> max)
        {
            max = arr[i];
            cnt++;
        }
        if (arr[i]<min)
        {
            min  = arr[i];
            cnt++;
        }
    }
    cout << cnt;

}