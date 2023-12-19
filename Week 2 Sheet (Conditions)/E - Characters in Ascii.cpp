#include <iostream>
using namespace std;

int main(){
    char c; cin >> c;
    if(c >= 65 && c <= 90){
        cout << "capital" << ' ' << c - 'A' << endl;
    }
    else if (c >= 97 && c <= 122){
        cout << "small" << ' ' << c - 'a' << endl;
    }
    else if(c >= 48 && c <= 57){
        cout << "digit" << endl;
    }
    else{
        cout << "symbol" << endl;
    }
}