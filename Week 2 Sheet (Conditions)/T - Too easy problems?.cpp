#include <iostream>
using namespace std;

int main(){
    long long x1 = 0, y1 = 0, r, x2, y2; cin >> x1 >> y1 >> r >> x2 >> y2;
    if ((((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))) <= r * r){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}