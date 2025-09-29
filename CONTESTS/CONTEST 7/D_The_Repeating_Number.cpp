#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int freq[n]={0};
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        for (int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for (int i=0;i<n;i++){
            if (freq[i]>1){
                cout<<i;
            }
        }
    cout<<endl;
    }
}