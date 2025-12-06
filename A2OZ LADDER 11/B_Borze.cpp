#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if (s[i]=='.')
        {
            cout << 0 ;
        }
        else if (s[i]=='-' and s[i+1] == '.' and i<= s.size()-1){
            i++;
            cout << 1;
        }
        else if(s[i]=='-' and s[i+1] == '-' and i<= s.size()-1){
            i++;
            cout << 2;
        }
    }
}