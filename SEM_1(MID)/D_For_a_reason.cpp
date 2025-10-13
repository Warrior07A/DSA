#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int sum=0;
        int n;
        cin>>n;
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            sum+=int(s[i]-'0');
            // cout<<s[i]<<" ";
        }
        // cout<<sum<<" ";
        if(sum==7){
            cout<<"Thala for a reason"<<endl;

        }
        else{
            cout<<"Blocked for no reason"<<endl;
        }
    }
}