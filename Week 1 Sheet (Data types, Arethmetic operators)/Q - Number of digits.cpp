#include <iostream>
using namespace std;

/*
    b = (x - (b*-1)/3)
*/

int main(){
    unsigned long long inp;
    cin >> inp;
    bool b1 = inp >= 1;
    bool b2 = inp >= 10;
    bool b3 = inp >= 100;
    bool b4 = inp >= 1000;
    bool b5 = inp >= 10000;
    bool b6 = inp >= 100000;
    bool b7 = inp >= 1000000;
    bool b8 = inp >= 10000000;
    bool b9 = inp >= 100000000;
    bool b10 = inp >= 1000000000;
    bool b11 = inp >= 10000000000;
    bool b12 = inp >= 100000000000;
    bool b13 = inp >= 1000000000000;
    bool b14 = inp >= 10000000000000;
    bool b15 = inp >= 100000000000000;
    bool b16 = inp >= 1000000000000000;
    bool b17 = inp >= 10000000000000000;
    bool b18 = inp >= 100000000000000000;
    bool b19 = inp >= 1000000000000000000;
    cout << b1 + b2 +b3 +b4+b5+b6+b7+b8+b9+b10+b11+b12+b13+b14+b15+b16+b17+b18+b19 << endl;
}
