#include <bits/stdc++.h>
using namespace std;



int main() {
	int a,b,target;
	cin>>a>>b>>target;
	long long arr[a][b];
	for (int i=0;i<a;i++){
	    for(int j=0;j<b;j++){
	        cin>>arr[i][j];
	    }
	}
    bool found=false;
	for (int i=0;i<a;i++){
	    for(int j=0;j<b;j++){
            if (arr[i][j]==target){
                found=true;
                cout<<"true";
                break;
            }
        }
	    
	}
    if (!found){
        cout<<"false";
    }
}
