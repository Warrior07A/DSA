#include <bits/stdc++.h>
using namespace std;
//output
// 1 4 7 2 5 8 3 6 9 


int main() {
	int a,b;
	cin>>a>>b;
	int arr[a][b];
	for (int i=0;i<a;i++){
	    for(int j=0;j<b;j++){
	        cin>>arr[i][j];
	    }
	}
	for (int j=0;j<b;j++){
	    for(int i=0;i<a;i++){
	        cout<<arr[i][j]<<" ";
	    }
	}

}
