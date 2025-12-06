#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int xorr = 0;
        for(int i =0 ;i <n;i++)
        {
            cin >> arr[i];
            xorr = xorr ^ arr[i];
        }
        if (n % 2 == 1 )
        {
            cout << xorr << endl;
        }
        else{
            if (xorr == 0)
            {
                cout << arr[n-1] << endl;
            }
            else{
                cout << -1 << endl;
            }
        }

    }


}