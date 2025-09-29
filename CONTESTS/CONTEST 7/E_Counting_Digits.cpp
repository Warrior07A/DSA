#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.size();
    int arr[10]={0};
    for (int i=0;i<s.size();i++){
        arr[s[i]-'0']++;
    }
    for (int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
}