#include <iostream>
using namespace std;

int main(){
    int n, odd = 0, even = 0; cin >> n;
    long long sum = 0;
    for (int i = 0; i < n; i++){
        int j;
        cin >> j;
        sum += j;
        if (j % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << sum << ' ' << odd << ' ' << even << endl;
}