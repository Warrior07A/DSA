#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5][5];
    int x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
            if (arr[i][j] == 1) {
                x = i+1;
                y = j+1;
            } 
        }
    }
    cout << abs(3 - x) + abs( 3 - y ); 
}