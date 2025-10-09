#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool comp(int a, int b){
    int lst_a = abs(a % 10);
    int lst_b = abs(b % 10);
    if (lst_a<lst_b){
        return true;
    }
    else if (lst_a==lst_b){
        if (a<b){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}