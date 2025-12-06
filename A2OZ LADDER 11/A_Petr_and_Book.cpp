#include<bits/stdc++.h>
using namespace std;

int main(){
    int p;
    cin >> p;
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    bool found = false;
    while(!found)
    {
        int cnt = 1;
        for(int i=0;i<7;i++)
        {
            if (p - arr[i] <= 0)
            {
                cout << cnt;
                found = true;
                break;
            }
            p -= arr[i];
            cnt++;
        }
    }
}