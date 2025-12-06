#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n ;
    cin >> n;
    int arr[3];
    int even = 0;
    int odd = 0;
    int min = INT_MAX;
    for(int i=0;i<3;i++){
        cin>>arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    sort(arr,arr+n);
    
    for(int i=0;i<3;i++){
        if (arr[i] % 2 == 1) {
            odd = arr[i];
            break;
        }
        else if(arr[i] % 2 == 0){
            even = arr[i];
            break;
        }
    }
    
    if (n % 2 ==0){
        if (min % 2 == 1){
            cout << (n-odd) / even + 1;
        }
        cout <<  n/min;
    }
    else {
        if (min % 2 == 1){
            cout << (n - min) / even;
        }
        else cout << (n)/min;
    }
}