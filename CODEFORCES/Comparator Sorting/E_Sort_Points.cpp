#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct coord
{
    long long x;
    long long y;
};

bool comp(coord a,coord b){
    if (a.x > b.x){
        return false;
    }
    else if (a.x == b.x){
        if (a.y > b.y){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        return true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    coord arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i].x>>arr[i].y;
    }
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
    }
}