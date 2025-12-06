#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;

    int len = s.size();
    bool one_found = false;
    string s1 = "";
    for(int i=0;i<len;i++)
    {
        if (s[i] == '0' and one_found)
        {
            s1+=s[i];
        }
        else if (s[i] == '1'){
            one_found = true;
            s1+=s[i];
        }
    }
    // cout << s1 << endl;
    string final_str = "";
    bool found0 =  false;
    int len2 = s1.size();
    for(int i=0;i<len2;i++)
    {
        if (s1[i] == '0'){
            s1[i] = -1;
            found0 = true;
            break;
        }
    }
    if (!found0){
        s1[0] = -1;
    }

    // cout << final_str;
    for(auto i : s1)
    {
        if (i != -1) cout << i;
    }
    // cout << final_str;
}