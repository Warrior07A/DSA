#include <bits/stdc++.h>
using namespace std;

int main() {
	char arr[3][3];
	for (int i=0;i<3;i++){
	    for(int j=0;j<3;j++){
	        cin>>arr[i][j];
	    }
	}
	int cnt=0;
	int winx=0;
	int wino=0;
	int game=0;
    for (int i=0;i<3;i++){
        if ((arr[i][0]=='X') and (arr[i][1]=='X') and (arr[i][2]=='X')) {
            // cout<<"Player X has won!";
            winx++;
        }
        else if ((arr[i][0]=='O') and (arr[i][1]=='O') and (arr[i][2]=='O')) {
            // cout<<"Player O has won!";
            wino++;
            
        }
        else if ((arr[0][i]=='X') and (arr[1][i]=='X') and (arr[2][i]=='X')) {
            // cout<<"Player X has won!";
            winx++;
        }
        else if ((arr[0][i]=='O') and (arr[1][i]=='O') and (arr[2][i]=='O')) {
            // cout<<"Player O has won!";
            wino++;
        }
        else if ((arr[0][0]=='X') and (arr[1][1]=='X') and (arr[2][2]=='X')) {
            // cout<<"Player X has won!";
            winx++;
        }
        else if ((arr[0][0]=='O') and (arr[1][1]=='O') and (arr[2][2]=='O')) {
            // cout<<"Player O has won!";
            wino++;
        }
        else if ((arr[0][2]=='X') and (arr[1][1]=='X') and (arr[2][0]=='X')) {
            // cout<<"Player X has won!";
            winx++;
        }
        else if ((arr[0][2]=='O') and (arr[1][1]=='O') and (arr[2][0]=='O')) {
            // cout<<"Player O has won!";
            wino++;
        }
        else if ((arr[i][0]=='.') or (arr[i][1]=='.') or (arr[i][2]=='.')) {
            // cout<<"Game is still in progress";
            game++;
        }
        else if ((arr[i][0]!='.') and (arr[i][1]!='.') and (arr[i][2]!='.')) {
            // cout<<"Game is still in progress";
            cnt++;
        }
    }
    if(cnt==3){
        cout<<"Draw";
    }
    else if (game>0 and winx==0 and wino==0){
        cout<<"Game is still in progress";
    }
    else if (winx>=1){
        cout<<"Player X has won!";
    }
    else if (wino>=1){
        cout<<"Player O has won!";
    }
    
     
}
