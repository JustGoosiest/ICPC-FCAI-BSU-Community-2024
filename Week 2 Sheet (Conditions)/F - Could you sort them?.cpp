#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if(a > b) {
        if (b > c){
            cout << c << ' ' << b << ' ' << a << endl;
        }
        else if(a > c){
            cout << b << ' ' << c << ' ' << a << endl;
        }
        else{
            cout << b << ' ' << a << ' ' << c << endl;
        }
    } else {
        if(a > c){
            cout << c << ' ' << a << ' ' << b << endl;
        }
        else if(b > c){
            cout << a << ' ' << c << ' ' << b << endl;
        }
        else{
            cout << a << ' ' << b << ' ' << c << endl;
        }
    }
}