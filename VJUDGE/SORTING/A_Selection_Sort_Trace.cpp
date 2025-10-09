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
    int cnt=0;
    for (int i=0;i<n;i++){
        int min=i;
        int s=0;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                min=j;
                s++;
            }
        }
        swap(arr[min],arr[i]);
        if (cnt==n-1) break;
        cout<<"Pass "<<cnt+1<<": ";
            for (int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }    
            cout<<", "<<"min_selected = "<<arr[i];
            cout<<endl;
    
        cnt++;
    }
    
}