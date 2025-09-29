#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    int n=s.size();
    bool check=false;
    for (int i=0;i<s.size();i++)
    {
        if (i!=a and s[i]>='0' and s[i]<='9'){
            check=true;   
        }
        else {
            check =false;
            break;   
        }
    }

    if (s[a]=='-'){
        check=true;
    }

    if (check){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}