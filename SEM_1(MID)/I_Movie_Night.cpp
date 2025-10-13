#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int cnt=0;
    int arr[100001]={0};
    while (t--) {
        string s;
        int n;
        cin>>s;
        if (s=="vote"){
            cin>>n;
            arr[n]++;
            if (arr[n]==1){
                cnt++;
            }
        }
        if (s=="withdraw"){
            cin>>n;
            if(arr[n]>0){
                arr[n]--;
                if(arr[n]==0){
                    cnt--;
                }
            }
        }
        if(s=="check"){
            cin>>n;
            cout<<arr[n]<<endl;
        }
        if (s=="active"){
            cout<<cnt<<endl;
        }
    }
    int max=INT_MIN;
    int index=0;
    for(int k=0;k<100001;k++){
        if (arr[k]>max){
            max=arr[k];
            index=k;
        }
    }
    cout<<"movie for tonight is "<<index;
}