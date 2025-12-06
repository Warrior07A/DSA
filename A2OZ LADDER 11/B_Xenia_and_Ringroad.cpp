#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    cin >> n >> m;
    int arr[m];
    
    for(int i=0;i<m;i++) cin>>arr[i];
    
    int cnt = 0;
    int distance = arr[0] - 1;
    int i = 0;
    bool found = true;
    // distance += arr[i] - 1 ;
    for(int i=0;i<m - 1;i++)
    {
        int a = arr[i];
        int b = arr[i+1];
        if (a <= b) distance += b - a;
        else distance += n - a + b;
    }
    cout << distance   ;
}