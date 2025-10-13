#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    int ar[n];
    int arr[1001]={0};
    for (int i=0;i<n;i++){
        cin>>ar[i];
    }
    for (int i=0;i<n;i++){
        arr[ar[i]]++;
    }
    for (int i=0;i<1001;i++){
        if (arr[i]>0){
            cout<<i<<" "<<arr[i]<<endl;
        }    
    }

}