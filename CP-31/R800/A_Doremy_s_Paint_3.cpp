    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define int long long

    signed main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin>>n;
            int arr[n];
            map <int,int> m;
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                if (m.find(arr[i]) != m.end())
                {
                    m[arr[i]]++;
                }
                else{
                    m.insert({arr[i],1});
                }

            }
            // for(auto i : m)
            // {
            //     cout << i.first << " " << i.second << " ";
            // }
            if (m.size()==1)
            {
                cout << "Yes" << endl;
            }
            else if (m.size()==2)
            {
                auto it1 = m.begin() ;
                auto it2 = next(it1);
                if (abs(it1->second - it2->second)== 1 or abs(it1->second - it2->second)== 0 ){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
            }
            else{
                cout << "No" << endl;
            }
            
        }
    }
