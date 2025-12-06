#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int countPairs = 0;

    // a^2 <= n  → a <= sqrt(n)
    // b^2 <= m  → b <= sqrt(m)
    for (int a = 0; a*a <= n; a++) {
        for (int b = 0; b*b <= m; b++) {
            if (a*a + b == n && a + b*b == m) {
                countPairs++;
            }
        }
    }

    cout << countPairs;
}
