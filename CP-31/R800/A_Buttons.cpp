#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        long long  Ann=0;
        long long Kat=0;
        Ann+=a;
        Kat+=b;
        if ( c % 2 == 0 )
        {
            Ann+=c/2;
            Kat+=c/2;
        }
        else {
            Ann+=(c/2+1);
            Kat+=(c/2);
        }

        if (Ann> Kat) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
        
    }
}