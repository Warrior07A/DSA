#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin , s);
    string t;
    getline(cin , t);
    int l1 = s.size();
    int freq[53]={0};
    for(int i=0;i<l1;i++)
    {
        if (s[i]>='a' and s[i]<='z') {
            freq[s[i] - 'a']++;
        }
        else if (s[i]>='A' and s[i]<='Z')
        {
            freq[s[i] - 'A'+26]++;
        }
    }
    int freq2[52]={0};
    int l2 = t.size();
    for(int i=0;i<l2;i++)
    {
        if (t[i]>='a' and t[i]<='z') {
            freq2[t[i] - 'a']++;
        }
        else if (t[i]>='A' and t[i]<='Z')
        {
            freq2[t[i] - 'A'+26]++;
        }
    }
    // for(auto i : freq) cout << i << " " ;
    // cout << endl;
    // for(auto i : freq2) cout << i << " ";
    bool found = true;
    for(int i=0;i<52;i++)
    {
        if (freq2[i]>freq[i]){
            found = false;
            break;
        } 
    }
    if (found) cout <<"YES";
    else cout <<"NO";

}