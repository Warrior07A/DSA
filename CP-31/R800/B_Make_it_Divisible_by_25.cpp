#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        vector <int> v;
        string s;
        cin >> s;
        int cnt = 0;
        int n = s.size();
        bool found = false;

        for(int i = n-1 ; i >= 0 ;i--)
        {
            if(s[i] == '0'){
                
                for(int j = i-1;j>=0;j--)
                {
                    if (s[j] == '0')
                    {
                        found = true;
                        break;
                    }
                    cnt++;
                }
            }
            if(found) {
                v.push_back(cnt);
                break;
            }
            cnt++;
        }

        found = false;
        cnt = 0;
        for(int i = n-1 ; i >= 0 ;i--)
        {
            if(s[i] == '5'){
                
                for(int j = i-1;j>=0;j--)
                {
                    if (s[j] == '2')
                    {
                        found = true;
                        break;
                    }
                    cnt++;
                }
            }
            if(found) {
                v.push_back(cnt);
                break;
            }
            cnt++;

        }

        found = false;
        cnt = 0;

        for(int i = n-1 ; i >= 0 ;i--)
        {
            if(s[i] == '5'){
                
                for(int j = i-1;j>=0;j--)
                {
                    if (s[j] == '7')
                    {
                        found = true;
                        break;
                    }
                    cnt++;
                }
            }
            if(found) {
                v.push_back(cnt);
                break;
            }
            cnt++;


        }

        found = false;
        cnt = 0;

        for(int i = n-1 ; i >= 0 ;i--)
        {
            if(s[i] == '0'){
                
                for(int j = i-1;j>=0;j--)
                {
                    if (s[j] == '5')
                    {
                        found = true;
                        break;
                    }
                    cnt++;
                }
            }
            if(found) {
                v.push_back(cnt);
                break;
            }
            cnt++;
        }
        int min = INT_MAX;
        for(auto i : v){
            if (i < min){
                min = i;
            }
        }
        cout << min << endl;
    }
}