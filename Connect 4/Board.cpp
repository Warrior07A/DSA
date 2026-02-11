const int ROWS = 6;
const int COLS = 7;

class Board{
public : 
    char arr[6][7];

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
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        for(int i=1;i<=COLS;i++){
            cout << i << " ";   
        }
    }
};
