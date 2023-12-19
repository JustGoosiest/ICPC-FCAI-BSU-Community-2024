#include <iostream>
using namespace std;

int main(){
    char aB; int k;
    cin >> aB; cin >> k;
    char newPos = (((aB - 'a') + k) % 26) + 'a';
    cout << newPos << endl;
}
