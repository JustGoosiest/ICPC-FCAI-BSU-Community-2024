#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n], sum = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 1; i <= k; i++){
        sum += a[n - i];
    }
    cout << sum << endl;
}