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
    char ch;
    int n;
    cin>>ch;
    if (ch=='+'){
        cin>>n;
        arr[n]++;
        if (arr[n]==1){
            cnt++;
        }
    }
    
    else if (ch=='-'){
        cin>>n;
        if (arr[n]>0){
            arr[n]--;
            if (arr[n]==0){
                cnt--;
            }
        }
    }
    
    else if (ch=='?'){
        cout<<cnt<<endl;
    }

}


}