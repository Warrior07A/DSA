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
        int n;
        cin>>n;
        int arr2[n];
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr2[i]=arr[i];
        }
        sort(arr2,arr2+n);
        int min=INT_MAX;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            if (arr2[i] != arr[i])
            {
                cout<<0<<endl;
                found=true;
                break;
            }
        }
        // cout<<"hello"<<endl;
        for(int i=0; i<n-1;i++)
        {
            int find = abs(arr[i] - arr[i+1]);
            if ( find < min){
                min = find;
            }
        }
        if (!found){
            // cout<<"hi";
            cout<<(min/2)+1<<endl;
        }

    }
}