#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int len = 2*n + 1;
    for(int i=0;i<len / 2;i++)
    {
        bool found = false;
        for(int j=0;j<len - 2 * i - 1 ;j++)
        {
            cout << " ";
        }
        int num = 0;
        for(int j=0;j<2*i+1;j++)
        {   
            if (j==2*i) cout << num;
            else  cout << num << " ";
            if (found) num--;
            else{
                num++;
                if (num>=i) found = true;
            }    
        }
        cout << endl;
    }
    for(int i=len/2;i>=0;i--)
    {
        bool found2 = false;
        for(int j=0;j<len - i*2 - 1;j++)
        {
            cout << " ";
        }
        int num = 0;
        for(int j=0;j<2*i+1;j++)
        {   
            if (j==2*i) cout << num;
            else  cout << num << " ";
            if (found2) num--;
            
            else{
                num++;
                if (num>=i) found2 = true;
            }
        }
        cout << endl;
    }
}