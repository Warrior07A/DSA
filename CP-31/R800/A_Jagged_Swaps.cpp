#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v;
        vector <int> v1;
        for(int i=0;i<n;i++)
        {
            int element;
            cin>>element;
            v.push_back(element);
            v1.push_back(element);
        }
        sort(v1.begin(),v1.end());
        for( int i = 0 ;i < n ;i++)
        {
            for(int j=1 ;j <n-1; j++)
            {
                if(v[j-1] < v[j] and v[j]> v[j+1])
                {
                    swap(v[j],v[j+1]);
                }
            }
        }

        if(v1==v){
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
        }
    }
}