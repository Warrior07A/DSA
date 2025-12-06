#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

bool check(int a, int b)
{
    if (a%2==0 and b%2==0) return true;
    else if (a%2!=0 and b%2!=0) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {cin>>arr[i];}

        long long sum_odd=0;
        long long sum_even=0;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            if (n==2 and check(arr[0],arr[1])){
                cout<<"YES"<<endl;
                found=true;
                break;
            }
            else{
                if (arr[i]%2!=0) sum_odd+=arr[i];
                else sum_even+=arr[i];
            }
        }
        if (!found) 
        {
            if (check(sum_odd,sum_even)){
                cout<<"YES"<<endl;
            }
            else 
            {
                cout<<"NO"<<endl;
            }
        }
        // cout<<"stat"<<endl;
    }
}