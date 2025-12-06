#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool comp (pair<int,int> x ,pair <int,int> y)
{
    if (x.first > y.first) return true;
    else if (x.first == y.first){
        if (x.second < y.second) return true;
        else return false;
    }
    else return false;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
        vector<pair<int,int>> v;
        int n , k;
        cin >> n >> k;  
        int arr[n];
        for(int i=0;i<n;i++) {
            pair<int,int> p;
            cin>>arr[i];
            if (arr[i] % k == 0){
                cout << i+1 << " ";                
                arr[i] = -1;
            }
            else {
                arr[i] = arr[i] % k;
                p.first = arr[i];
                p.second = i+1;
                v.push_back(p);
            }
        }
        sort(v.begin(),v.end(),comp);
        for(auto i : v)
        {
            cout << i .second << " ";
        }
        cout << endl;
    }
}