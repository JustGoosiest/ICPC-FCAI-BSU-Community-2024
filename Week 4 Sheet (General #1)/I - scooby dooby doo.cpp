#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int x = (n - (n % 3)) / 3;
    cout << "sc"; for(int i = 0; i < x + 2; i++) cout << 'o'; cout << "by" << ' ';
    cout << "d"; for(int i = 0; i < x + 2; i++) cout << 'o'; cout << "by" << ' ';
    cout << "d"; for(int i = 0; i < x + 2; i++) cout << 'o'; 
}