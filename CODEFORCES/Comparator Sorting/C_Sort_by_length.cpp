#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool comp(string a, string b){
    int l1=a.size();
    int l2=b.size();
    if (l1>l2){
        return false;
    }
    else if (l1==l2){
        if (a<b){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,comp);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}