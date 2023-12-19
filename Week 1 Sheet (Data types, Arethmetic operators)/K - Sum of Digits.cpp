#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first, second, third;
    first = n/100;
    second = (n / 10) % 10;
    third = n % 10;
    cout << first + second + third << endl;
}
