#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[1000]={0};
    arr[0]= 0;
    arr[1] = 1;
    for(int i=2;i<=1000;i++)    // 0 1 1 2 3 5 8 13
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    int n;
    cin >> n;
    int index;
    for(int i=0;i<10000;i++)
    {
        if (arr[i] == n)
        {
            index = i;
            break;
        }
    }
    // for(auto i : arr) cout << i << " ";
    if ( n==2)
    {
        cout << arr[index - 1]<< " " << arr[index - 2] <<" "<< arr[index - 3];
    }
    else if (n == 1)
    {
        cout << 1 << " "<< 0 << " "<< 0;
    }
    else if (n == 0)
    {
        cout << 0 << " " << 0 << " " << 0 ;
    }
    else if (n >2) {
        cout << arr[index - 4] << " " << arr[index - 3] << " " << arr[index - 1];
    }
    else{
        cout << "I'm too stupid to solve this problem";
    }
}