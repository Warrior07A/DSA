    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define int long long

    struct check{
        int n;
        int pos;
    };

    bool comp(check x, check y){
        if (x.n < y.n) return true;
        else return false;
    }
    signed main() {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        
        ios_base::sync_with_stdio(0);
        cin.tie(nullptr);
        vector<check> v;
        int n;
        cin >> n;
        for(int i=0;i< 2*n;i++)
        {
            check ch;
            cin >> ch.n;
            ch.pos = i+1;
            v.push_back(ch);
        }

        sort(v.begin(),v.end(),comp);

        bool yes = false;
        
        for(int i=0;i<v.size();i+=2)
        {
            if (v[i].n != v[i+1].n){
                yes = true;
            }
        }
        if (!yes)
        {
            for(int i=0;i<v.size();i+=2)
            {
                cout << v[i].pos << " " << v[i+1].pos << endl;
            }
        }
        else cout << -1;
        return 0;
    }