#include<bits/stdc++.h>
using namespace std;

int ROWS = 6;
int COLS = 7;

class Board{
public : 
    // char arr[6][7];
    vector <string> arr;
    Board(){}
    Board(int r ,int c ){
        string s (c, '-');
        arr.assign(r,s);
        ROWS = r;
        COLS = c;

    }

    void init(){
        for(int i=0;i<ROWS;i++){
            for(int j=0;j<COLS;j++){
                arr[i][j] = '-';
            }
        }
    }

    void display(){
        for(int i=0;i<ROWS;i++){
            for(int j=0;j<COLS;j++){
                if (COLS > 9) cout << arr[i] [j] << "  ";
                else cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        for(int i=1;i<=COLS;i++){
            if (i <= 9) cout << i << "  ";
            else
             cout << i << " ";
        }
        cout << endl;
    }
};
