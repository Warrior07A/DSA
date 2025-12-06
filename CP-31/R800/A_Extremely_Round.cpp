#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long



signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector <int> v;
    for(int i =1 ;i<=999999;i++)
    {
        string str = to_string(i);
        int zerocnt = 0;
        for(int j=0;j<str.length();j++)
        {
            if (str[j]=='0') zerocnt++;
        }
        if (zerocnt == str.length() - 1) v.push_back(i);
    }
    // for(auto i : v)
    // {
    //     cout << i << " ";
    // }
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
        int cnt = 0;
        for(int j = 0;j<v.size();j++)
        {

            if (v[j] <= arr[i]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}