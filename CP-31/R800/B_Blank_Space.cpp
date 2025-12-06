#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            int no;
            cin>>no;
            v.push_back(no);
        }
        // for(auto it : v)
        // {
        //     cout<<it<<" ";
        // }
        long long max_bs=0;
        for(int i=0;i<n;i++)
        {
            int k = i;
            long long cur_bs=0;
            while(v[k]==0 and k<n)
            {
                cur_bs++;
                k++;
            }
            if(cur_bs > max_bs)
            {
                max_bs=cur_bs;
            }
        }
        cout<<max_bs<<endl;
    }
}