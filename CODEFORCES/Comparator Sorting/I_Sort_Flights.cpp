#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
struct flight
{
    int no;
    int time;
    string dest;
};

bool comp(flight a, flight b){
    if (a.time < b.time){
        return true;
    }
    else if (a.time == b.time){
        if (a.no < b.no){
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    flight arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i].no>>arr[i].time>>arr[i].dest;
    }
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i].no<<" "<<arr[i].time<<" "<<arr[i].dest<<endl;
    }

}