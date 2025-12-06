#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define debug(x) cout << "x is : " << x  << endl;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    bool found = false;
    for(int i=0;i<s.size();i++)
    {
        if (i<s.size() - 2)    
        {
            if (s[i] == '1' and s[i+1] == '4' and s[i+2] == '4')
            {
                found = true;
                i+=2;   
                continue;
            }

        }
        if (i<s.size()-1)
        {
            if (s[i] == '1' and s[i+1] == '4')
            {
                found = true;
                i++;
                continue;
            }
        }
        if (s[i] == '1' )
        {
            found = true;
            continue;
        }
        else{
            found = false;
            break;
        }
    }
    if (found) cout << "YES";
    else cout << "NO";
}