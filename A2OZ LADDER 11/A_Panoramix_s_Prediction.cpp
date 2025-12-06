#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m;
    cin >> n >> m;
    bool found = false;
    int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0;i<14;i++)
    {
        if (n == arr[i] and m == arr[i+1]) {
            found = true;
            break;
        }
    }
    if (found) cout << "YES";
    else cout << "NO";
}



