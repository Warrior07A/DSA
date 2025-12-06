#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int zero = 0;
        int one = 0;
        int t = 0;
        for(int i=0;i<s.size();i++)
        {
            if (s[i] == '1') one++;
            else zero++;
        }
        for(int i = 0 ;i<s.size();i++)
        {
            if (s[i] == '1' and zero > 0)
            {
                t++;
                zero--;
            }
            else if (s[i] == '0' and one > 0)
            {
                t++;
                one--;
            }
            else{
                break;
            }
        }
        
        cout << s.size() - t << endl;
    }
}