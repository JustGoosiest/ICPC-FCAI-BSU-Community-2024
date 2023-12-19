#include <iostream>
using namespace std;

int main(){
    int x, y; cin >> x >> y;
    if (x != y)
    {
        if (x - y > 0){
            if (y + 3 > x){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else if(y - x > 0){
            if (x + 3 > y){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    
}