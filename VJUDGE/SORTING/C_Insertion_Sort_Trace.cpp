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
    for (int i=1;i<n;i++){
        int shift=0;
        int temp=arr[i];
        int j=i-1;
        while(j>=0 and temp<arr[j]){
            arr[j+1]=arr[j];
            shift++;
            j--;
        }
        arr[j+1]=temp;
        
        cout<<"Pass "<<i<<": ";
                for (int k=0;k<n;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<", ";
                for (int k=0;k<=i;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<"| ";
                for (int k=i+1;k<n;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<", shifts = "<<shift<<endl;
    }



}