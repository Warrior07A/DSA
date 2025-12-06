#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int num;
            cin >>num;
            v.push_back(num);
        }
        int minn = INT_MAX;
        int minnindex = 0;
        bool found = true;
        int cnt  = 0;
        while(found){
            for(int i=0;i<v.size()-1 ;i++){
                if (v[i] < minn) {
                    minn= v[i];
                    minnindex = i;
                }
            }

            if (minnindex==0)
            {
                if (max (v[0],v[v.size() - 1]) >  max (v[0],v[1])){
                    int merged = max(v[0],v[1]);
                    v.erase(v.begin());
                    v[1] = merged;
                }
                else{
                    int merged = max(v[0],v[v.size() - 1]);
                    v.erase(v.end());
                    v[v.size() - 1] = merged;
                }
            }
            else if (minnindex == v.size()-1)
            {

            }
            else{
                int left = max (v[minnindex],v[minnindex - 1]);
                int right = max (v[minnindex],v[minnindex + 1]);
                if (left > right)  {
                    v.erase(minnindex);
                    v[minnindex+1] = right;
                }
                else{
                    v.erase(minnindex)
                }
            }
            
        }

    }
}