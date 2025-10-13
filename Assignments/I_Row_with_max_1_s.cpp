#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for (int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin>>arr[i][j];
	    }
	}
int max_row=0;
int max_num=0;
bool found=true;
	for (int i=0;i<n;i++){
        int num=0;
        
        
	    for(int j=0;j<m;j++){
            if (arr[i][j]==1){
                num++;
                found=true;
                
                if (num>max_num){
                    max_num=num;
                    max_row=i;
                }
            }
            if (num==0){
                found=false;
            }
	    }

	}
    
    if (found==false){
        cout<<-1;
    }
    else{
        cout<<max_row;    
    }
    
}
