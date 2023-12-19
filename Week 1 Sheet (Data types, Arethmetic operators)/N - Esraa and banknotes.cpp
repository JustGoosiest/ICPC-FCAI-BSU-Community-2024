#include <iostream>
using namespace std;

int main(){
    int balance;
    cin >> balance;
    int wD1 = (balance - (balance % 50));
    int wD2 = balance - wD1;
    int wD3 = wD2 % 20;
    cout << (wD1/50) + (wD2/20) + (wD3/1) << endl;
}
