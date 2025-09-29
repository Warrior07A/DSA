#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
    string s;
    cin>>s;
    char a,b;
    cin>>a>>b;

    for (int i=0;i<s.size();i++){
        if(s[i]==a){
            s[i]=b;
        }
        // else if(s[i]=='b'){
        //     s[i]='a';
        // }
    }
    cout<<s;
}