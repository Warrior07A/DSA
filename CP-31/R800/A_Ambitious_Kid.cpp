#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    int max=INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr[i]=abs(arr[i]);
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i] < min){
            min=arr[i];
        }
    }
    cout<<min<<endl;

}