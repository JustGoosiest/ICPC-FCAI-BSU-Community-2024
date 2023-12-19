#include <iostream>
using namespace std;

int main(){
    int n, temp = 0; cin >> n;
    for(int i = 0; i < n; i++){
        int j; cin >> j;
        if (temp < j){
            temp = j;
        }
    }
    cout << temp << endl;
}