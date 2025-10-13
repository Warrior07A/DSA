#include <bits/stdc++.h>
using namespace std;
#define endl '\n'


struct task
{
    int dur;
    int dead;
};

bool comp(task a,task b){
    if (a.dur < b.dur){
        return true;
    }
    else if (a.dur == b.dur){
        if (a.dead < b.dead){
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
    task arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i].dur>>arr[i].dead;
    }
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i].dur<<" "<<arr[i].dead<<endl;
    }
}