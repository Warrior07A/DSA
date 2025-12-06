#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n , k;
        cin >> n >> k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];

        if (k ==2 or k ==3 or  k==5)
        {
            int small_rem = INT_MAX;
            for(int i=0;i<n;i++)
            {
                if (arr[i]% k ==0){
                    small_rem = 0 ;
                }
                else{
                    small_rem = min(small_rem, k - (arr[i] % k));
                }
            }
            cout << "one" <<small_rem ;
        }

        else{
            int even = 0;
            int even_pro = 1;
            int odd = 0;
            for(int i=0;i<n;i++)
            {
                if (arr[i] % 2 == 0) {
                    even++;
                    even_pro *= arr[i];
                }
            }
            if (even_pro % 4 ==0) cout << "two"<<  0 ;
            else  cout << "three" <<2 ;
        }
        cout << endl;

    }
}