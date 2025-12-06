#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

bool comp(int x ,int y)
{
    if (x > y) return true;
    return false;
}

signed main(){
    int k;
    cin >> k;
    int arr[12];
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12,comp);
    int cnt = 0;
    int j = 0;
    while(k>0 and j <12)
    {
        cnt++;
        k -= arr[j];
        j++;
    }
    if (k <= 0) cout << cnt ;
    else cout << -1;
}