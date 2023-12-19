#include <iostream>
using namespace std;

int main(){
    long long n; cin >> n; long long j = 0;
    while (n > 0){
        j += n % 10;
        n /= 10;
        j *= 10;
    }
    j /= 10;
    cout << j << endl;
}