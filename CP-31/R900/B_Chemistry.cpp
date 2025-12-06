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
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        int arr[26]={0};
        for(int i = 0 ; i < n; i++)
        {
            arr[s[i]-'a']++;
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            if (arr[i] % 2 ==1)
            {
                cnt++;
            }
        }
        if (cnt > k + 1)
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}