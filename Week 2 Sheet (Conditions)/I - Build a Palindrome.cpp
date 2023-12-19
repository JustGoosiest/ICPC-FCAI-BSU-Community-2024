#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int t = n % 10, s = (n / 10) % 10, f = (n / 100) % 100;
    if(f == t){
        cout << n << endl;
    }
    else if(f == s){
        cout << f << t << s << endl;
    }
    else{
        cout << "Impossible" << endl;
    }
}