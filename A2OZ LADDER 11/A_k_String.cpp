#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    string s;
    cin >> s;
    int size = s.size();
    int freq[26]={0};
    for(int i=0;i<size;i++)
    {
        freq[s[i]-'a']++;
    }
    for(auto i : freq)
    {
        if (i >0)
        {
            if (i % k != 0) 
            {
                cout << -1 ;
                return 0;
            }
        }
    }
        int len = k;
    while(k--)
    {
        for(int i=0;i<26;i++)
        {
            if (freq[i]>0)
            {
                char c = i + 'a';
                int size = freq[i]/len;
                for(int i=0;i<size;i++) cout << c;
            }
        }
    }
}