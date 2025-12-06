#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) { 
        cin>>arr[i];
    }
    int min = INT_MAX;
    int index = -1;
    for(int i=0;i<n;i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i+1;
        }
    }
    sort(arr,arr+n);
    if (arr[0] == arr[1])
    {
        cout << "Still Rozdil" ;
    }
    else{
        cout << index;
    }
}