#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int net = 0;
    while(n--)
    {
        int cnt = 0;
        for(int i=0;i<3;i++)
        {
            int check;
            cin>>check;
            if(check == 1) cnt++;
        }
        cout << endl;
        if (cnt >= 2) net++;
    } 
    cout <<net;
    

}