#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin >> n >> q;
    vector<int> arr(n);
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    while (q--) {
        int type;
        cin >> type;

        if (type == 2) {
            cout << even << endl;
        } 
        else if (type == 3) {
            cout << odd << endl;
        } 
        else if (type == 1) {
            int idx,q;
            cin>>idx>>q;
            idx--;

            if (arr[idx]%2==0) even--;
            else{
                odd--;
            }
            
            arr[idx]=q;

            if (arr[idx]%2==0) even++;
            else{
                odd++;
            }
            
        }
    }
}
