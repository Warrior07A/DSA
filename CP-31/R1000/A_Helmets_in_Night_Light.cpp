#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct pairs{
    int people;
    int cost;
};

bool comp(pairs x,pairs y){
    if (x.cost < y.cost) return true;
    else if (x.cost == y.cost)
    {
        if (x.people > y.people) return true;
        else return false;
    }
    else return false;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin >> n >> p;
        int people[n];
        for(int i=0;i<n;i++)
        {
            cin>>people[i];
        }

        int cost[n];
        for(int i=0;i<n;i++)
        {
            cin>>cost[i];
        }
        vector <pairs> v;
        for(int i=0;i<n;i++)
        {
            pairs p;
            p.people =  people[i];
            p.cost = cost[i]; 
            v.push_back(p);
        }

        sort(v.begin(),v.end(),comp);


        for(auto i : v)
        {
            cout << i.people<< " "; 
        }
        cout << endl;
        for(auto i : v)
        {
            cout << i.cost<< " "; 
        }
        cout << " /";
        cout << endl;
        // n = n-1;
        // int net = 0;
        // while(n>0)
        // {
        //     for(auto i : v)
        //     {
        //         // cout << i.cost << " ";
        //         net += (i.cost * i.people);
        //         n = n -  i.people;
        //     }
        // }
        // cout << net << endl;
    }
}