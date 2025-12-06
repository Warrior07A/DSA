#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    int arr[m];
    int arr2[m];
    int min = 0;
    int max = 0;
    for(int i=0;i<m;i++) {
        cin>>arr[i];
        arr2[i] = arr[i];
    }
    bool found = true;
    int counter = 0;
    while(counter != n)
    {
        int max_no = INT_MIN;
        int index = 0;
        for(int i=0;i<m;i++)
        {   
            if (arr[i] > max_no)
            {
                max_no = arr[i];
                index = i;
            }
        }
        max+=max_no;
        arr[index]--;
        counter++;
    }
    bool found2 = true;
    int counter2 = 0;
    while(counter2 != n)
    {
        int min_no = INT_MAX;
        int index2 = 0;
        for(int i=0;i<m;i++)
        {   
            if (arr2[i]>0 and arr2[i] < min_no)
            {
                min_no = arr2[i];
                index2 = i;
            }
        }
        min+=min_no;
        arr2[index2]--;
        counter2++;
    }
        cout << max << " " << min ;  
}
