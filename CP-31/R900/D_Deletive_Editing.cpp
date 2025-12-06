#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--)
    {
        string s, t;
        cin >> s >>t;
        string s_rev = s;
        int freq[26]={0};
        for(int i = 0 ;i <t.size(); i++)
        {
            freq[t[i]-'A']++;
        }
        reverse(s_rev.begin(),s_rev.end());
        
        for(int i =0; i < s.size();i++)
        {
            if (freq[s_rev[i] - 'A'] > 0 )
            {
                freq[s_rev[i]-'A']--;

            }
            else{
                s_rev[i] = '.';

            }
        }
        string confirm;
        for(int  i = s_rev.size() -1 ;i >=0 ;i--){
            if (s_rev[i] == '.') continue;
            else{
                confirm.push_back(s_rev[i]);
            }
        }
        if(confirm == t){
            cout <<"YES"<<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
}