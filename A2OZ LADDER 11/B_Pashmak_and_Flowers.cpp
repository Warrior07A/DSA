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
    int maxx =INT_MIN;
    int minn =INT_MAX;
    int freq[n]={0};
    map <int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        if (arr[i] > maxx) {
            maxx = arr[i];
        }
        if (arr[i] < minn) {
            minn = arr[i];
        }
    }
    int m1 = 0;
    int m2 = 0;
    for(auto i : m)
    {
        if (i.first == maxx) m1 = i.second;
        if (i.first == minn) m2 = i.second;
    }
    if (maxx-minn == 0)
    {
        cout << maxx - minn << " " << n *(n-1) /2 ; 
    }
    else{
        cout << maxx - minn << " " << m1*m2;
    }
    
}