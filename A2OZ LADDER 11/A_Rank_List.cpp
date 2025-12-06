#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct check{
    int p;
    int tl;
};

bool comp(check x,check y){
    if (x.p > y.p) return true;
    else if (x.p == y.p){
        if (x.tl < y.tl) return true;
        else return false;
    }
    else return false;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n , place;
    cin >> n >> place;
    vector<check> v;
    while(n--){
        check s;
        cin >> s.p >> s.tl;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),comp);
    // for(auto i : v) cout << i.p << " " << i.tl << endl;
    set <pair<int,int>> s;
    for(auto i : v){
        pair<int,int>p;
        p.first = i.p;
        p.second = i.tl;
        s.insert(p);
    }
    // for(auto i : v) cout << i.p << " " << i.tl << endl;
    int cnt = 0;
    int first= 0 ,sec = 0;
    for(auto i : v){
        cnt++;
        if (cnt == place){
            first = i.p ;
            sec = i.tl;
        }
    }
    // cout << first << " " << sec;
    int ans = 0;
    for(auto i : v){
        if (i.p == first and i.tl == sec) ans++;
    }
    cout << ans ;
}
