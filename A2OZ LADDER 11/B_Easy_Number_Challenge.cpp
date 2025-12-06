#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

int divisors(int n)
{
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if (n % i ==0)
        {
            if (i == n/i) cnt++;
            else cnt+=2;
        }
    }
    if (cnt >= 1073741824) return cnt % 1073741824;
    else return cnt;
}

signed main(){
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for(int i=1 ;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                cnt += divisors(i * j * k);
            }
        }
    }
    if (cnt >= 1073741824 ) cout << cnt % 1073741824;
    else  cout << cnt;
}