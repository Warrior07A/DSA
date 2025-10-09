#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct point
{
    int x;
    int y;
    long long dis;
};

bool comp(point a, point b){
    if (a.dis < b.dis){
        return true;
    }
    else if (a.dis == b.dis){
        if (a.x < b.x){
            return true;
        }
        else if (a.x == b.x){
            if (a.y <  b.y){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }       

    else{
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,ox,oy;
    cin>>n>>ox>>oy;
    point arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i].x>>arr[i].y;
        long long x_dis=(ox-arr[i].x)*(ox-arr[i].x);
        long long y_dis=(oy-arr[i].y)*(oy-arr[i].y);
        long long distance = x_dis + y_dis;
        arr[i].dis=distance;
    }

    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i].x<<" "<<arr[i].y<<endl;
    }
}