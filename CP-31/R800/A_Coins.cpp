#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long  n,k;
        cin>>n>>k;
        long long check=0;
        if (n % 2 ==0)
        {
            cout<<"YES"<<endl;
            continue;
        }

        else{
            check = n-k;
            if (check % 2 ==0)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}