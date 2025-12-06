#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        int x_king, y_king;
        int x_queen, y_queen;
        cin>> a >> b;
        cin>> x_king>> y_king;
        cin >> x_queen >> y_queen;
        set <pair <int,int>> king_hits,queen_hits;
        int dx[4]={1,-1,-1,1};        int dy [4]={1,1,-1,-1};
        for(int i=0 ; i<4;i++)
        {
            king_hits.insert({x_king + a * dx[i], y_king + b * dy[i]});
            king_hits.insert({x_king + b * dx[i], y_king + a * dy[i]});

            queen_hits.insert({x_queen + a * dx[i], y_queen + b * dy[i]});
            queen_hits.insert({x_queen + b * dx[i], y_queen + a * dy[i]});
        }
        // for(auto position :king_hits)
        // {
        //     cout<<position.first<<" "<<position.second;
        //     cout<<endl;
        // }
        int cnt=0;
        for (auto position : king_hits)
        {
            
            if( queen_hits.find(position) != queen_hits.end()){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}