#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        int sub1 = 0;
        map <int,int> m;
        int cnt = 1;
        for(int i=0;i < n ; i++){
            cin>>a[i];
        }

        for(int i=0;i<n-1;i++)
        {
            if (a[i] == a[i+1])cnt++;
            else {
                if (m[a[i]] < cnt){
                    m[a[i]] = cnt;
                }
                else if (m.find(a[i]) == m.end()){
                    m[a[i]]++;
                    cnt = 0;
                }
            }
        }
        if (m.find(a[n-1]) ==    m.end()) m[a[n-1]]++;
        else if (m[a[n-1]] < cnt){
            m[a[n-1]] = cnt;
        }
        m[a[n-1]] = cnt;

        int b[n];
        int cnt2 = 1;   
        int sub2 = 0;
        map<int,int> m2;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            if (b[i] == b[i+1])cnt2++;
            else {
                if (m2[b[i]] < cnt2){
                    m2[b[i]] = cnt2;
                    cnt2 = 1;
                }
                cnt2 = 1;
            }
        }
        if (m2[b[n-1]] < cnt2){
            m2[b[n-1]] = cnt2;
        }
        m2[b[n-1]] = cnt2;
        for(auto i : m) cout << i.first<< " " << i.second << " / ";
        for(auto i : m2) cout << i.first<< " " << i.second << " / ";
        cout << endl;   
    }
}