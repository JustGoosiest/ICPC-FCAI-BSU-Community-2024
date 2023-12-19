#include <iostream>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    int bigCounter = 0;
    for(int i = a; i <= b;i++){
            int counter = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                counter++;
            }
        }
        if(counter % 2 != 0){
            bigCounter++;
        }
    }
    cout << bigCounter << endl;
}