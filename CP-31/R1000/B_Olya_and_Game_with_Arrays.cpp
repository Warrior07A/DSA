#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool comp(int x ,int y){
    if (x > y) return true;
    else return false;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int till = n - 1;
        vector <int> v;
        vector <int> v_2ndsm;
        while(n--)
        {
            int desc;
            cin >> desc;
            int arr[desc];
            int mini;
            int mini2;
            for(int i=0;i<desc;i++)
            {
                cin>>arr[i];
            }
            sort(arr,arr+desc);
            mini = arr[0];
            mini2 = arr[1];
            v.push_back(mini);
            v.push_back(mini2);
            v_2ndsm.push_back(mini2);
        }
        sort(v.begin(),v.end(),comp);
        sort(v_2ndsm.begin(),v_2ndsm.end(),comp);
        int sum = 0 ;

        for(int i=0; i < till; i++)
        {
            sum += v_2ndsm[i]; 
        }
        sum += *(v.end()-1);
        cout << sum   << endl;
        // sum += *(v.end()-1);
        // cout << sum << endl;
    }
}