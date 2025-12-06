#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct pairs{
    int a,b;
};

int divisor(int n)
{
    int cnt = 0;
    for(int i=1;i*i<=n;i++)
    {
        if (n % i == 0)
        {
            if (i == n/i) cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}

bool comp(pairs x ,pairs y)
{
    if (x.b < y.b)
        return true;
    else if(x.b == y.b)
    {
        return (x.a < y.a);
    }
    else{
        return false;
    }
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int arr[n];
    vector <pairs> v;
    for(int i=0;i<n;i++)
    {
        pairs p;
        cin>>arr[i];
        p.a = arr[i];
        p.b = divisor(arr[i]);
        v.push_back(p);
    }

    sort(v.begin(),v.end(),comp);
    for(auto i : v)
    {
        cout << i.a << " ";
    }
}