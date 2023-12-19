#include <iostream>
using namespace std;

int main(){
    int lenght; cin >> lenght;
    string let; cin >> let;
    for (int i = 0; i < lenght; i++)
    {
        if (let[i] <= 90){
            let[i] += 32;
        }
        else{
            let[i] -= 32;
        }
    }
    cout << let << endl;
}