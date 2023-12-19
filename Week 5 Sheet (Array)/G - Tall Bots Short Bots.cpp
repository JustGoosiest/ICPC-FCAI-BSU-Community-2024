#include <iostream>
using namespace std;
void mega();

int main(){
    int n; cin >> n;
    unsigned long long sum = 0;
    int a[n]; for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;
}