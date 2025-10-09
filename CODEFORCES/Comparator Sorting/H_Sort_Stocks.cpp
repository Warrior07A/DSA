#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct stock
{
    string name;
    int price;
    int mc;
};

bool comp(stock a,stock b){
    if (a.price < b.price){
        return true;
    }
    else if(a.price == b.price){
        if (a.mc > b.mc){
            return true;
        }
        else if (a.mc == b.mc){
            if (a.name < b.name){
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
    stock arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i].name>>arr[i].price>>arr[i].mc;
    }
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].price<<" "<<arr[i].mc<<endl;
    }
}