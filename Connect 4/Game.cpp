#include <bits/stdc++.h>
using namespace std;
#include "Player.cpp"
#include "Board.cpp"
#include "Replay.cpp"

int K = 0;
class Game
{
    Player p1;
    Player p2;
    Board b;
    Replay Re;

public:
    void start()
    {
        p1.input();
        p2.input();

        int r  , c;        
        cout << "Enter Number of Rows: " ;
        cin >> r;
        cout << "Enter Number of Columns: ";
        cin >> c;

        cout << "Enter Number of connects you wanna make !" ;
        cin >> K;
        b = Board (r,c);
        Re.darr_init(r,c);
        // b.init(); 
        // b.display();
        system("cls");
    }


    void game(){
        Player currPlayer = p1;
        b.display();
        while(BoardNotFull(b)){
            cout << "Player " << currPlayer.name << " / " << currPlayer.ch  << " turn" << endl;
            int col;
            cout << "Enter Column No : "<< endl;
            cin >> col;
            system("cls");
            col--;
            
            if (!isvalid(col)){
                cout << "Incorrect Column !" << endl;
                b.display();
                continue;
            }
                           
            int row = place_chip(col , currPlayer.ch);
            
            Re.add(col);
            
            if (hasWon(row , col)){
                cout << "Player " << currPlayer.name <<" / " << currPlayer.ch << " has won !!" << endl;

                b.display();
                cout << "Do you want to Replay?(Y/N)" << endl;
                char ask;
                cin >> ask;
                if (ask == 'Y'){
                    Re.replay_init(p1.ch , p2.ch);
                }
                return ; 
            }
            b.display();
            currPlayer = (currPlayer.ch == p1.ch ? p2 : p1);
        }
        cout << "It's a Tie " << endl;
        char ask;
            cin >> ask;
        if (ask == 'Y'){
            Re.replay_init(p1.ch , p2.ch);
        }
        return ; 
    }

    bool BoardNotFull(Board b){
        for(int j=0;j<COLS;j++){
            if (b.arr[0][j] == '-') return true; 
        }
        return false;
    }
    bool isvalid (int col){
        return ((col >= 0 and col < COLS) and b.arr[0][col] == '-');
    }

    int place_chip(int col , char symbol){
        int rows = ROWS - 1;
        while(b.arr[rows][col] != '-'){
            rows--;
        }
        b.arr[rows][col] = symbol;
        return rows;
    }

    bool hasWon(int row , int col){
        pair<int,int> DirectionV[4][2] = {
            {{0,1} , {0,-1}},
            {{-1,0} , {1,0}},
            {{-1,1} , {1,-1}},
            {{-1, -1} , {1,1}}
        };
        for(int i=0;i<4;i++){
            int cnt1 = countsimilar(row, col , DirectionV[i][0]) - 1;
            int cnt2 = countsimilar(row, col , DirectionV[i][1]) - 1;
            if (cnt1 +  1  + cnt2  >= K) return true;
        }
        return false;
    }

    int countsimilar(int row , int col , pair<int,int> p){
        char symbol = b.arr[row][col];
        int cnt = 0;
        while(b.arr[row][col] == symbol){
            if (b.arr[row][col] == symbol){
                cnt++;
                row += p.first;
                col += p.second;
                // cout << row << " " << 
                if (!valid2darray(row,col)) return cnt;
            }
            else return cnt;
        }
        return cnt;
    }

    bool valid2darray(int row , int col){
        return (row >=0 and row<ROWS  and col >=0 and col < COLS);
    }

};