#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int aT = a % 10, aS = (a / 10) % 10, aF = (a / 100) % 100;
    int bT = b % 10, bS = (b / 10) % 10, bF = (b / 100) % 100;
    int aSUM = aF + aS + aT, bSUM = bF + bS + bT;
    if(aSUM == bSUM){
        cout << aSUM << endl;
    }
    else if (aSUM > bSUM){
        cout << aSUM << endl;
    }
    else{
        cout << bSUM << endl;
    }
}