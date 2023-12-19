#include <iostream>
using namespace std;

int main(){
    long long n; cin >> n;
    if(n % 5 == 0){
        if(n % 15 == 0){
            cout << n / 15 << endl;
        }
        else{
            cout << n / 15 + 1 << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }
}