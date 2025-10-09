#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool comp(int a,int b){
    int abs_a=abs(a);
    int abs_b=abs(b);

    if (abs_a > abs_b){
        return false;
    }
    else if (abs_a == abs_b){
        if (a>b){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        return true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}