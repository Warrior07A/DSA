#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    int n,q;
    cin >> n >>q;
    int arr[n];
    int contri[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i+1<n;i++){
        if (arr[i] == arr[i+1]) contri[i] =1;
        else contri[i] = 0;
    }

    int pre[n]={0};
    int preadd = 0;
    for(int i=0;i<n;i++)
    {
        preadd += contri[i];
        pre[i] = preadd;
    }

    while(q--)
    {
        int l , r;
        cin >> l >> r;
        l--;
        r--;
        r--;
        if (l>r){
            cout << "YES";
        }
        else if (l==0){
            if (pre[r] == r - l + 1) cout <<"YES";
            else cout << "NO";
        }
        else{
            if (pre[r] - pre[l - 1] == r - l + 1) cout <<"YES";
            else cout << "NO";
        }
        cout << endl;
    }

    return 0;
}