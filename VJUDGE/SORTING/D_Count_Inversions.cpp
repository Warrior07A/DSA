#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    int f_shift=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int j=i-1;
        int shift=0;
        int temp=arr[i];
        while(j>=0 and temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
            shift++;
        }
        arr[j+1]=temp;
        f_shift+=shift;
    }
    cout<<f_shift;

}
