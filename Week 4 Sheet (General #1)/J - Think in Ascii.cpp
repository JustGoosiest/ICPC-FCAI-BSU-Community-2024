#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i < 26; i++){
        int n;
        cin >> n;
        cout << char(n + 96) << ' ';
    }
}