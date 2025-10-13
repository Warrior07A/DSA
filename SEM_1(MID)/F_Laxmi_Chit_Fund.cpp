#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int div=t;
    int total=0;
    int max=INT_MIN;
    int min=INT_MAX;
    while (t--) {
        int n;
        cin>>n;
        total+=n;
        if(n>max){
            max=n;
        }
        if(n<min){
            min=n;
        }
    }
    int avg=total/div;

    cout<<total<<" "<<max<<" "<<min<<" "<<avg;
    

}