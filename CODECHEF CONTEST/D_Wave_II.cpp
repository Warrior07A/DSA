#include <bits/stdc++.h>
using namespace std;

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
	    if (j%2==0){
	        for(int i=0;i<a;i++){
	            cout<<arr[i][j]<<" ";
	        }    
	    }
	    else{
	        for (int i=a-1;i>=0;i--){
	            cout<<arr[i][j]<<" ";
	        }
	    }
	    
	}

}
