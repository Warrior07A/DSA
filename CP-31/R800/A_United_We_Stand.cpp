#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        // vector <int> a;
        for (int i = 0; i < n ;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        vector <int> b;
        vector <int> c;
        b.push_back(arr[0]);
        
        for(int i=1;i<n;i++)
        {
            bool div=false;
            for(int j=0;j<b.size();j++)
            {
                if(b[j] % arr[i]==0)
                {
                    b.push_back(arr[i]);
                    div=true;
                    break;
                }
            }
            if (!div)  c.push_back(arr[i]);
        }
        
        if (b.size()==0 or c.size()==0) cout<<-1<<endl;
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for (auto i : b){
                cout<<i<<" ";
            }
            cout<<endl;
            for (auto i : c){
                cout<<i<<" ";
            }
            cout<<endl;
        }

    }
}