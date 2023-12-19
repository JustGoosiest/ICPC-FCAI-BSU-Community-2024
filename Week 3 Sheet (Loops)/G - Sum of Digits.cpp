#include <iostream>
using namespace std;

int main() {
    unsigned long long n; cin >> n;
    unsigned long long sum = 0, d = n, counter = 0;
    while(d > 0){
        counter++;
        d /= 10;
    }
    for(int i = 0; i <= counter; i++){
        d = n % 10;
        sum += d;
        n /= 10;
    }
    cout << sum << endl;
}