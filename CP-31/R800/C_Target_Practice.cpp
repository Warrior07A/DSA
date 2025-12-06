#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        char arr[10][10];
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>arr[i][j];
            }
        }
        long long sum=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if (arr[i][j]=='.'){
                    continue;
                }
                else if ((i == 0  or i==9 or j==0 or j==9) and arr[i][j]=='X')
                {
                    sum+=1;
                }
                else if((i==1 or i==8 or j==1 or j==8) and arr[i][j]=='X')
                {
                    sum+=2;
                }
                else if ((i==2 or i==7 or j==2 or j==7) and arr[i][j]=='X')
                {
                    sum+=3;
                }
                else if ((i==3 or i==6 or j==3 or j==6) and arr[i][j]=='X')
                {
                    sum+=4;
                }
                else if ((i==4 or i==5 or j==4 or j==5) and arr[i][j]=='X')
                {
                    sum+=5;
                }
            }
        }
        cout<<sum<<endl;
    }
    
}