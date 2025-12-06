#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >>n;
    int arr[n];
    int five = 0;
    int zero = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if (arr[i] == 5) five++;
        else zero++;
    }
    int rem ;
    if (five >= 9 and zero > 0)
    {
        rem = five / 9 ;
    }
    else if (zero == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else cout << 0;


    string s = "";
    for(int i=0;i < rem * 9 ;i++)
    {   
        s+='5';
    }
    s+='0';
    cout << s ;

    // if (zero == 0) cout << -1;
    // else if ( zero > 0 and five > 0)
    // {
    //     string s = "";
    //     for(int i = five ;i>=0;i--)
    //     {
    //         if ((i * 5) % 9 == 0)
    //         {
    //             five = i;
    //             break;
    //         }
    //     }
    //     for(int i=0;i<five;i++)
    //     {
    //         s+='5';
    //     }
    //     s+='0';
    //     cout << s;
    //     return 0;
    // }
    // if (zero > 0) cout << 0 ;
}