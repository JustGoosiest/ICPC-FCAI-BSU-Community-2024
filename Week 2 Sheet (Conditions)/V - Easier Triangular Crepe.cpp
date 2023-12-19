#include <iostream>
using namespace std;

int main(){
    unsigned long long a, b, c; cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a){
        if (a > b && a > c){
            cout << a * a << endl;
        }
        else if(b > a && b > c){
            cout << b * b << endl;
        }
        else{
            cout << c * c << endl;
        }
    }
    else{
        cout << "No More Triangles!" << endl;
    }
}