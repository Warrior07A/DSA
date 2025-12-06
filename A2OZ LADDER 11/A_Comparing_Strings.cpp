#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin >> s1 >> s2;
    int cnt = 0;
    if (s1.size() != s2.size())
    {
        cout << "NO"; return 0;
    }
    int len = s1.size();
    int index1,index2;
    bool found = false;
    for(int i=0;i<len;i++){
        if (!found and s1[i] != s2[i]){
            index1 = i;
            cnt++;
            found = true;
        }
        if (s1[i]!=s2[i]){
            index2  = i;
            cnt++;
        }
    }
    swap(s1[index1],s1[index2]);
    if (s1 == s2) cout <<"YES";
    else cout << "NO";
}