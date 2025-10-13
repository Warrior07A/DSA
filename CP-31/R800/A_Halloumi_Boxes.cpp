#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector <int> v1;
        vector <int> v2;
        for (int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            v1.push_back(p);
        }

        v2=v1;
        
        sort(v2.begin(),v2.end());
        
        if(k==1){
            if (v1==v2){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else if (k>1){
            cout<<"YES";
        }
        cout<<endl;
    }
}