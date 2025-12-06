#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , m ;
    cin >> n >> m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {   
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (i%2 ==0)
            {
                if (j % 2 ==0)
                {
                    if (arr[i][j] == '-') cout << '-';
                    else cout << "B";
                }
                else{
                    if (arr[i][j] == '-') cout << '-';
                    else cout << "W";
                }
            }
            if (i % 2 == 1)
            {
                if (j % 2 ==0)
                {
                    if (arr[i][j] == '-') cout << '-';
                    else cout << "W";
                }
                else{
                    if (arr[i][j] == '-') cout << '-';
                    else cout << "B";
                }
            }
        }
        cout << endl;
    }
}