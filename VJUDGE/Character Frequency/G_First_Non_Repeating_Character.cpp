#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int arr[26]={0};
    int n=s.size();
    for (int i=0;i<n;i++){
        arr[s[i]-'a']++;
    }

    char ch='a';
    bool found=false;
    for (int i=0;i<n;i++){
        if(arr[s[i]-'a']==1){
            cout<<s[i];
            found=true;
            break;
        }
    }

    if (!found){
        cout<<-1;
    }
}