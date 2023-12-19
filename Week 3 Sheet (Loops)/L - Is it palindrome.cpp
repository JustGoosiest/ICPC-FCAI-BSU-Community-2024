#include <iostream> 
using namespace std;

int main() 
{ 
    unsigned long long n; cin >> n;
    unsigned long long d = n, reverse = 0, counter = 0;
    while(d > 0){
        d /= 10;
        counter++;
    }
    d = n;
    for(int i = 0; i <= counter; i++){
        reverse += d % 10;
        d /= 10;
        reverse *= 10;
    }
    d = n;
    reverse /= 100;
    if(reverse == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}