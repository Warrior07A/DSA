#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct  amaz{
    int order;
    int time;
    int prio;
};

bool comp(amaz a, amaz b){
    if (a.prio > b.prio){
        return true;
    }

    else if (a.prio == b.prio){
        if (a.time<b.time){
            return true;
        }
        else if (a.time == b.time){
            if (a.order < b.order){
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
    int n;
    cin>>n;
    amaz arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i].order>>arr[i].time>>arr[i].prio;
    }
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i].order<<" "<<arr[i].time<<" "<<arr[i].prio<<endl;
    }
}