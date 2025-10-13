#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
    

string s1;
string s2;
cin>>s1>>s2;
sort(s1.begin(),s1.end());
sort(s2.begin(),s2.end());
if (s1==s2){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}