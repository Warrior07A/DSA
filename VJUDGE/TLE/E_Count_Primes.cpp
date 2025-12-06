#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long


bool isprime(int i)
{
    // if (i < 2) return false;
    int count = 0;
    for(int j =1 ;j*j<=i;j++)
    {
        if (i % j == 0)
        {   
            if (j == i/j) count++;
            else count+=2;
        
        }
        // if (count > 2) return false;
    }
    if (count == 2) return true;
    return false;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int cnt = 0;
    for(int i=1;i<=n;i++)
    {
        if (isprime(i)) {
        cnt++;
        // cout << i << " ";
    }
    }
    cout << cnt ;
}