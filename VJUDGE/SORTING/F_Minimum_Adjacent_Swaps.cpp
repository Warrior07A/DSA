#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;

    for (int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                // for (int k=0;k<n;k++){
                //     cout<<arr[k]<<" ";
                // }
                // cout<<endl;
                cnt++;  
            }
            
        }
    }
    cout<<cnt;
}