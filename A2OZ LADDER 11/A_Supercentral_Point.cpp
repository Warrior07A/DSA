#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct pairs {
    int x;
    int y;
};
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    vector <pairs> v;
    while(t--)
    {
        pairs p;
        cin >> p.x;
        cin >> p.y;
        v.push_back(p);
    }
// point (x', y') is (x, y)'s right neighbor, if x' > x and y' = y
// point (x', y') is (x, y)'s left neighbor, if x' < x and y' = y
// point (x', y') is (x, y)'s lower neighbor, if x' = x and y' < y
// point (x', y') is (x, y)'s upper neighbor, if x' = x and y' > y
    int cnt = 0;
    for(int i=0;i<v.size();i++)
    {
        int right = 0;
        int left = 0;
        int up = 0;
        int down = 0;
        for(int j=0;j<v.size();j++)
        {
            if(v[i]. x < v[j].x and v[i].y == v[j].y) right++;
            if (v[i].x > v[j].x and v[i].y == v[j].y) left++;
            if (v[i].x == v[j].x and v[i].y < v[j].y) up++;
            if (v[i].x == v[j].x and v[i].y > v[j].y) down++;
        }
        if (right and left and up and down) cnt++;

    }   
    cout << cnt; 
}