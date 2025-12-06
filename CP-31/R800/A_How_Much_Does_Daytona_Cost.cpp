#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        bool found = false;
        for(int i=0;i<n;i++)
        {
            if (arr[i]==k)
            {
                found=true;
                break;
            }
            
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}