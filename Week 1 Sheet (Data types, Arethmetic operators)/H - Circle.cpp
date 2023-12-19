#include <iostream>
using namespace std;

int main(){
    int r;
    cin >> r;
    const int r1 = 1, pi = 22/7;
    const int cirArea = pi*(r1*r1);
    int cirArea2 = pi*(r*r);
    cout << cirArea2/cirArea << endl;
}
