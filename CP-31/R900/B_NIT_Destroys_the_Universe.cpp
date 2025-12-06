#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int sum = 0;
        int c_zero = 0;
        int c_nonzero = 0;
        bool num_found=false;
        for(int i=0 ;i < n;i++)
        {
            cin>>arr[i];
            if (arr[i] != 0 )  c_nonzero++;
            else c_zero++;        
        }
        
        if (c_zero == n ){
            cout << 0 <<endl;
            continue;
        }
        int conse = 0;
        int m_consec = 0;
        for(int i=0; i < n; i++)
        {
            if (arr[i] != 0){
                conse++;
            }
            else {
                conse = 0;
            }
            m_consec = max(conse , m_consec);
        }
        if ((m_consec + c_zero) == n){
            cout << 1 << endl;

        }
        else{
            cout << 2 <<endl;
        }

        

    }
}