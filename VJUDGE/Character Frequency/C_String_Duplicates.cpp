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
for(int i=0;i<n;i++){
    arr[s[i]-'a']++;
}
char ch='a';
bool found=false;
for (int i=0;i<26;i++){
    if (arr[i]>1){
        cout<<char(ch+i);
        found=true;
    }
}
if(!found){
    cout<<-1;
}

}