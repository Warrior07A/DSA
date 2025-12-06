#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
    int n , x;
    cin >> n >> x;
    vector <int> v;
    v.push_back(0);
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }    
    v.push_back(x);
    int length = v.size();
    int maxi = 0;
    // cout << v.size()<< endl;
    for(int i=0;i<v.size()-1;i++)
    {
        if (i != v.size()-2)
        {
            maxi = max(maxi , v[i+1]- v[i]);
        }
        else{
            maxi = max(maxi, 2 * (v[i+1] - v[i]));
        }
    }
    cout << maxi << endl;
    }
}