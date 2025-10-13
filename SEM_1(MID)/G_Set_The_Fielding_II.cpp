#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    string arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    for(int i=0;i<n;i++){
        
        bool found=false;
        string person=arr[i];
        for(int j=0;j<m;j++){
            if(person == arr2[j]){
                found=true;
                break;
            }
        
        }
        if(found == false){
            cout<<arr[i]<<endl;
        }
    }
}
