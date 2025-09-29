#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int cnt=0;
    int arr[100001]={0};
    while(t--){
        int a;
        cin>>a;
        
        if (a==1){
            int b;
            cin>>b;
            arr[b]++;
            if (arr[b]==2){
                cnt++;
            }
        }   
        else if (a ==2){
            int b;
            cin>>b;
            int p=arr[b];
            if(arr[b]>0){
                arr[b]--;
                if (p>=2 and arr[b]<2){
                    cnt--;
                }
            }
        }
        else if (a==3){
            cout<<cnt<<endl;
        }
    }
}