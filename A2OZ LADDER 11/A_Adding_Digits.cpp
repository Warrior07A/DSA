#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b , n;
    cin >> a >> b >> n;
    int s = a;
    int totalsize = to_string(a).size() + n;
    bool count_string = false, found = true;
    while(n--)
    {
        a = a * 10;
        for(int i=0;i<=9;i++)
        {
            a += i;
            if (a % b == 0) break;
            a -= i;
            if (i == 9) found = false;
        }
        if (a % 10 == 0 && found)
        {
            count_string = true;
            break;
        }
        if (!found) {
            cout << -1;
            return 0;
        } 

    }
    
    
    int c_check = a;
    string c = to_string(a);
    if (count_string == true) {
        for(int i=0; i<n; i++)
        {
            c +='0';
        }
        cout << c;
    }
    else cout << c;
}