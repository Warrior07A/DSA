#include<bits/stdc++.h>
#include <unistd.h> 
using namespace std;

class Replay{
    vector <int> moves;
    // vector <string> darr;
    Board dboard;
public:
    
    void add(int num){
        moves.push_back(num);
    }

    void darr_init(int r,int c){
        dboard = Board (r,c);
        // string s(c, '0');
        // darr.assign(r, s);
    }

    void replay_init(char p1, char p2){
        system("cls");
        int n = moves.size();
        for(int i=0;i<n;i++){
            if (i % 2 == 0) place_chip(moves[i], p1);
            else place_chip(moves[i], p2 );
            dboard.display();
            sleep(1);
            system("cls");
        }
    }

    void place_chip(int col , char symbol){
        int rows = ROWS - 1;
        while(dboard.arr[rows][col] != '-'){
            rows--;
        }
        dboard.arr[rows][col] = symbol;
    }
};