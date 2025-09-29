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
        char a;
        cin>>a;
        
        if (a=='+'){
            int b;
            cin>>b;
            arr[b]++;
            if (arr[b]==1){
                cnt++;
            }
        }   
        else if (a =='-'){
            int b;
            cin>>b;
            if(arr[b]>0){
                arr[b]--;
                if (arr[b]==0){
                    cnt--;
                }
            }
        }
        else if (a=='?'){
            cout<<cnt<<endl;
        }
    }
}