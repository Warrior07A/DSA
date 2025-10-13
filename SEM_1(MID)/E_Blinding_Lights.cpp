#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m/2;i++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    for(int i=0;i<m;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int i=0;i<m;i++){

            if (i==0 or i==m-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++){
        cout<<"*";
    }


}