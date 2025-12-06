#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int dupli = stoi(s);
    bool found = true;
    while(found){
        dupli++;
    set <char> s1;
        string dupli2 = to_string(dupli);
        for(int i=0;i<4;i++)
        {
            s1.insert(dupli2[i]);
        }
        if (s1.size() == 4){
            found = false;
            cout << dupli2;
        }
    }
}