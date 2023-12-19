#include <iostream>
using namespace std;

void birds(int x);

int main(){
    int n; cin >> n;
    birds(n);
}

void birds(int x){
    int a[x]; for(int i = 0; i < x; i++) cin >> a[i];
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int b, c; cin >> b >> c;
        a[b - 2] += c - 1;
        a[b - 0] += a[b - 1] - c;
        a[b - 1] = 0;
    }
    for(int i = 0; i < x; i++) cout << a[i] << endl;
}