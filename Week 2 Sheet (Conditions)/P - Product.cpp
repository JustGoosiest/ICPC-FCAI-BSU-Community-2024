#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    if(a > 0 && b > 0){
        cout << "Positive" << endl;
    }
    else if(a < 0 && b < 0){
        if((b - a + 1) % 2 == 0){
            cout << "Positive" << endl;
        }
        else{
            cout << "Negative" << endl;
        }
    }
    else{
        cout << "Zero" << endl;
    }
}