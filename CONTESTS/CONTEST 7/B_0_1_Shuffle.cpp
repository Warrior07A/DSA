#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
    int n;
    cin>>n;
    int zero=0;
    int one=0;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]==1){
            one++;
        }
        else if (arr[i]==0){
            zero++;
        }
    }

    for (int i=0;i<zero;i++){
        cout<<0<<" ";
    }
    for (int i=0;i<one;i++){
        cout<<1<<" ";
    }
    cout<<endl;
    }


}