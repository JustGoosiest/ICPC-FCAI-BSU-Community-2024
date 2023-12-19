#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    long long temp = 1;
    for (int i = 1; i <= b; i++){
        temp *= a;
    }
    cout << temp << endl;
}