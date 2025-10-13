#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool comp(int a, int b){
    if (a > b){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    sort(arr,arr+n,comp);
    for (int i=0;i<k;i++){
        sum+=arr[i];
    }
    cout<<sum;
}