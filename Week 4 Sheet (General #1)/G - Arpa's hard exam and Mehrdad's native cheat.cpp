#include <iostream>
using namespace std;

int main(){
    long long x; cin >> x;
    if(x == 0) cout<<"1";
    else if(x % 4 == 1) cout << "8";
    else if(x % 4 == 2) cout << "4";
    else if(x % 4 == 3) cout << "2";
    else if(x % 4 == 0) cout << "6";
}