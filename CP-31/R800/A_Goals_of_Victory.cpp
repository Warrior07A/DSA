#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       int arr[n-1];
       long long sum = 0;
       for(int i=0;i<n-1;i++)
       {
        cin>>arr[i];
        sum+=arr[i];
        }   
        if(sum>0)
        {
            cout<<-sum<<endl;
        }
        else {
            cout<<-sum<<endl;
        }
    }
}