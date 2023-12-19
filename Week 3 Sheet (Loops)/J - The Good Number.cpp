#include <iostream>
using namespace std;

int main(){
    long long n, odd = 0, even = 0; cin >> n;
    while(n > 0){
        int j = n % 10;
        n /= 10;
        if(j % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd == 0 || even == 0){
        cout << "Good Number" << endl;
    }
    else{
        cout << "Not Good Number" << endl;
    }
}