#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , k;
    cin >> n >> k;
    int arr[n];
    vector<int> v;
    int sum = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    v.push_back(sum);
    int initial = 0;
    for(int i=k;i<n;i++)
    {
        sum -= arr[initial];
        sum += arr[i];
        initial++;
        v.push_back(sum);
    }


    // for(auto i : v) cout << i << " ";

    int len = v.size();
    int min = INT_MAX;
    int index = 0;
    for(int i=0;i<len;i++)
    {
        if(v[i] < min){
            min = v[i];
            index = i;
        }
    }
    cout << index + 1;
}