#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

struct  Student
{
    string name;
    int marks;
};

bool comp(Student a, Student b){
    if (a.marks>b.marks){
        return true;
    }
    else if (a.marks==b.marks){
        if (a.name<b.name){
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
    Student arr[n];
    for(int i=0;i<n;i++){
        string naam;
        int marks;
        cin>>naam>>marks;
        arr[i].name=naam;
        arr[i].marks=marks;
    }
    sort(arr,arr+n,comp);
    for (int i=0;i<n;i++){
        cout<<arr[i].name<<" "<<arr[i].marks;
        cout<<endl;
    }
}