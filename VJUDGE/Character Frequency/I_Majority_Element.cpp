#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int arr2[100001]={0};
    for(int i=0;i<n;i++){
        arr2[arr[i]]++;
    }
    bool found=false;
    for(int i=0;i<100001;i++){
        if (arr2[i]>n/2){
            cout<<i;
            found=true;
        }
    }
    if (!found){
        cout<<-1;
    }

}