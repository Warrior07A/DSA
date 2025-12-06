#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;
    int len = s.size();
    for(int i=0;i<len;i++)
    {
        if (s[i] == target[j])
        {
            j++;
        }
        if (j ==5) {
            cout <<"YES";
            return 0;
        }
    }
    cout << "NO";
}