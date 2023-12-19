#include <iostream>
#include <algorithm>
using namespace std;

void increasing();

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++) increasing();
}

void increasing(){
    int n; cin >> n;
    int a[n], counter = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        if(a[i] < a[i + 1] && i != n - 1){
            counter++;
        }
    }
    if(counter == n - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}