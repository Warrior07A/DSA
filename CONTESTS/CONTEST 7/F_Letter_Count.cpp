#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.size();
    int arr[26]={0};
    for (int i=0;i<n;i++){
        arr[s[i]-'A']++;
    }
    char ch='A';
    for (int i=25;i>=0;i--){
        if (arr[i]>0){
        cout<<char(ch+i)<<" : "<<arr[i];
        cout<<endl;
        }
    }
}