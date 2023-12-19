#include <iostream>
using namespace std;

int main() {
    long long n, x, a, b, c; cin >> n >> x;
    bool bl = x % 3;
    a = x / 3 + bl;
    b = (a * 3) - x;
    c = n - a - b;
    cout << a << ' ' << b << ' ' << c << endl;
}
