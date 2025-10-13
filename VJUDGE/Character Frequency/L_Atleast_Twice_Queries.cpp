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
        cin>>a;

        if (a==1){
            cin>>b;
            arr[b]++;
            if (arr[b]==2){
                cnt++;
            }
        }

        else if (a == 2){
            cin>>b;
            int check = arr[b];
            if (arr[b] > 0){
                arr[b]--;
            }
            if (check >= 2 and arr[b] < 2){
                cnt--;
            }
        }

        else if (a == 3){
            cout<<cnt<<endl;
        }

    }
}