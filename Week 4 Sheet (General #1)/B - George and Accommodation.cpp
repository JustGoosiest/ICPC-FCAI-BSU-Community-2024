#include <iostream>
using namespace std;
int main() {
    int t, counter = 0; cin >> t;
    for(int i = 0; i < t; i++){
        int a, b; cin >> a >> b;
        if(b - a >= 2){
            counter++;
        }
    }
    cout << counter << endl;
}