#include <iostream>
using namespace std;

int main(){
    unsigned long long a, b, c; cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a){
        if (a == b && b == c){
            cout << "Equilateral" << endl;
        }
        else if(a == b || b == c || c == a){
            cout << "Isosceles" << endl;
        }
        else{
            cout << "Scalene" << endl;
        }
    }
    else{
        cout << "Invalid" << endl;
    }
}