#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    
    if (n==1){
        for(int i=0; i<m; i++){
            if (arr[0][i]==-1){
                break;
                found=true;
            }
            cout<<arr[0][i]<<" ";
        }
    }    
    else if (m==1){
        
        for(int i=n-1;i>=0;i--){
            if (arr[i][0]==-1){
                found=true;
                break;
            }
            cout<<arr[i][0]<<" ";
        }
    }
    else {
        for(int i=n-1;i>0;i--){
            if (arr[i][0]==-1 or found==true){
                found=true;
                break;
            }
            cout<<arr[i][0]<<" ";
        }
        for(int i=0;i<m;i++){
            // if (found=true) break;
            if (arr[0][i]==-1 or found==true){
                found=true;
                break;
            }
            cout<<arr[0][i]<<" ";
        }
        for(int i=1;i<=n-1;i++){
            // if (found=true) break;

            if (arr[i][m-1]==-1 or found==true){
                found=true;
                break;
            }
            cout<<arr[i][m-1]<<" ";
        }
        for(int i=m-2;i>0;i--){
            // if (found=true) break;
            if (arr[n-1][i]==-1 or found==true){
                found=true;
                break;
            }
            cout<<arr[n-1][i]<<" ";
        }
    }
}


