#include <iostream>
using namespace std;

int main(){
    long long x;
    cin >> x;
    long long hours = x / 3600;
    long long minutes = (x / 60) % 60;
    long long seconds = x % 60;
    cout << hours << ' ' << minutes << ' ' << seconds << endl;
}
