#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
    for(int i = 0; i < n; i++){
        string verdict; cin >> verdict;
        if(verdict == "AC"){
            c0++;
        }
        else if(verdict == "WA"){
            c1++;
        }
        else if(verdict == "TL"){
            c2++;
        }
        else{
            c3++;
        }
    }
    cout << "AC x " << c0 << endl;
    cout << "WA x " << c1 << endl;
    cout << "TL x " << c2 << endl;
    cout << "RE x " << c3 << endl;
}