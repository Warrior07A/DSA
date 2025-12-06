#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

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
        int neg=0;
        int pos=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i] < 0){
                neg++;
            }
            else{
                pos++;
            }
        }
        int oper=0;
        while(pos < neg ||  neg % 2 == 1)
        {
            oper++;
            pos++;
            neg--;
        }
        cout<<oper<<endl;

    }
}