#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

struct pairs {
    int a;
    int b;
};

bool comp(pairs x, pairs y)
{
    if (x.b < y.b) {
        return true;
    }
    else if (x.b == y.b) {
        if (x.a < y.a) {
            return true;
        }
        else {
            return false;
        }
    }
    else return false;
}

void factors(int n, pairs &robo) { 
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) { 
        if (n % i == 0) {
            cnt += (i * i == n ? 1 : 2);
        }
    }
    robo.a = n;
    robo.b = cnt;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    pairs robo;
    int arr[n];
    vector<pairs> v;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        factors(arr[i], robo);
        v.push_back(robo);
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v) {
        cout << i.a << " ";
    }
}
