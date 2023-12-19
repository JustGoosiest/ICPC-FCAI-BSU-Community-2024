#include <iostream>
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    if(a > c && b > c){
        cout << a + b << endl;
    }
    else if(c > a && b > a){
        cout << c + b << endl;
    }
    else{
        cout << c + a << endl;
    }
}