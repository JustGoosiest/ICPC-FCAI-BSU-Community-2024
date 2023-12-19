#include <iostream>
using namespace std;
 
int main(){
    int w, h;
    cin >> w >> h;
    int area = w*h;
    int road = (w + h) - 1;
    cout << area - road << endl;
}
