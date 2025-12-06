#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    int one = 0,two = 0,three = 0,four=0,five=0,six = 0, seven = 0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if (arr[i] == 1) one++;
        else if (arr[i] == 2) two++;
        else if (arr[i] == 3) three++;  
        else if (arr[i] == 4) four++;  
        else if (arr[i] == 5) five++;  
        else if (arr[i] == 6) six++;  
        else if (arr[i] == 7) seven++;
    }
    if ((five > 0 or seven > 0)  or one != two + three or one != four + six or three > six) {
        cout << -1;
        return 0;
    }
    while(one--)
    {
        if (two > 0 and four > 0){
            cout << "1 2 4";
            two--; four--;
        }else if (two > 0 and six > 0){
            cout << "1 2 6";
            two--; six--;   
        }else if (three > 0 and six > 0){
            cout << "1 3 6";
            three--; six--;
        }
        cout << endl;
    }
    

}