#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int pass = 1; pass < n; pass++) {
        int swaps = 0;

        
        for (int i = 0; i < n - pass; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swaps++;
            }
        }

        
        cout << "Pass " << pass << ": ";
        for (int i = 0; i < n; i++) {
            cout << arr[i]<<" ";
            
        }
        cout << ", swaps = " << swaps << endl;

        
        if (swaps == 0) break;
    }

    return 0;
}
