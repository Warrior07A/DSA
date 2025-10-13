#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q;
    int cnt=0;
    int arr[100001]={0};
    while(q--){
        int a,b;
        cin>>a>>b;

        if (a==1){
            arr[b]++;
            if (arr[b]==0){
                cnt++;
            }
        }
        
        else if(a==2){
            if (arr[b]>0){
                arr[b]--;
            }
        }
        
        else if (a==3){
            cout<<arr[b]<<endl;
        }
    }
}