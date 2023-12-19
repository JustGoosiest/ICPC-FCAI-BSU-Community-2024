#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    string layers;
    for (int i = 1; i <= n; i++){
        if (i % 2 == 1 && i != n){
            layers += "I hate that ";
        }
        else if(i % 2 != 1 && i != n){
            layers += "I love that ";
        }
        else if(i == n && i % 2 == 0){
            layers += "I love it ";
        }
        else{
            layers += "I hate it ";
        }
    }
    cout << layers << endl;
}