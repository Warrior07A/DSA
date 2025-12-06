#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

bool isvowel(char s)
{
    if(s== 'A' or s== 'E' or s=='I' or s=='O' or s=='U' or s=='y' or s=='Y' or s =='a' or s== 'e' or s=='i' or s=='o' or s=='u') return true;
    else return false;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int n = s.size();
    string s1 ="";
    for(int i=0;i<n;i++)
    {
        if (isvowel(s[i])) continue;
        if (isupper(s[i])) {
            s1+=".";
            s1+=tolower(s[i]);
        }
        else {
            s1+=".";
            s1+=s[i];
        }
    }

    cout << s1;

}