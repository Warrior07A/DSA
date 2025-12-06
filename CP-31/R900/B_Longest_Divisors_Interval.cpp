#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while ( t--)
    {

        // main thing is that the no of iterations will go upto 100MAX not even 10^18
        //why??
        // lcm of (any no upto 50)  = apprx of order 10^18
        // i.e. even if we collect 50 number together such that it factorize all of them number would reach 10^18
        // rest check video !
        long long n;
        cin >> n;
        int i=1;
        while( n % i == 0)
            i++;
        cout<< i - 1 << endl;
        }

}