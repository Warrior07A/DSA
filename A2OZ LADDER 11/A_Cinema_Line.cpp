#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int b25 = 0, b50 = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 25) {
            b25++;
        } else if (x == 50) {
            if (b25 == 0) {
                cout << "NO";
                return 0;
            }
            b25--;
            b50++;
        } else {  // x == 100
            if (b50 > 0 && b25 > 0) {
                b50--;
                b25--;
            } else if (b25 >= 3) {
                b25 -= 3;
            } else {
                cout << "NO";
                return 0;
            }
        }
        // cout << b25 <<  " " << b50  << endl;
    }

    cout << "YES";
}
