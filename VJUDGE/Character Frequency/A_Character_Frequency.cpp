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
for (int i=0;i<26;i++){
    if (arr[i]>0){
        cout<<char(ch+i)<<":"<<arr[i];
        cout<<endl;
    }
}

}