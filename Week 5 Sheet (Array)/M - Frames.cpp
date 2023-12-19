#include <iostream>
using namespace std;
void minesweeper(int x, int y);

int main(){
    int x, y; cin >> x >> y;
    minesweeper(x, y);
}

void minesweeper(int x, int y){
    char c[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> c[i][j];
        }
    }
    for(int i = 0; i < x + 2; i++){
        for(int j = 0; j < y + 2; j++){
            if(i == 0 || i == (x + 2) - 1){
                cout << '#';
            }
            else{
                if(j == 0 || j == (y + 2) - 1) cout << '#';
                else{
                    cout << c[i - 1][j - 1];
                }
            }
        }
        cout << endl;
    }
}