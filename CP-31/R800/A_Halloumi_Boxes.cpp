#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        set<int>s;
        int arr2[n];
        bool noequal = false;
        for( int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr2[i]=arr[i];
            s.insert(arr[i]);
        }
        if (k>1 or s.size()==1)
        {
            cout<<"YES"<<endl;
        }
        else if (k==1)
        {
            sort(arr2,arr2+n);
            for(int i=0;i<n;i++)
            {
                if(arr[i] != arr2[i])
                {
                    noequal = true;
                }
            }
            if (!noequal){
                cout <<"YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO"<<endl;
        }
        
    }
}