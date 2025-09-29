#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int arr[100001]={0};
    while(t--){
        int a,b;
        cin>>a>>b;
        if (a==1){
            arr[b]++;
        }
        else if (a==2 and arr[b]>0){
            arr[b]--;
        }
        else if (a==3){
            int c;
            cin>>c;
            if (arr[b]==arr[c]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}