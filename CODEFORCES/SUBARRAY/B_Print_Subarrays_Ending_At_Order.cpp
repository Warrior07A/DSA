#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


void print_array(int r, int l ,int arr[]){
    for(int i = l; i <= r ;i++)
    {
        cout << arr[i] << " ";
    }
     cout << endl;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int r = i,l = i;r < n;r++)
        {
            while(l>=0)
            {
                print_array(r, l,arr);
                l--;
            }
        }
    }
}