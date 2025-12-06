#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n % 4 == 3)
    {
        cout << -1 ;
        
    }
    else{
        for(int i=1;i<=n;i++)
        {
         if(i%4 == 3 and i+1 <= n)
         {
            cout << i+1 << " " << i << " ";
            i++;
         }   
         else{
            cout << i << " ";
         }
        }
    }
}