#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int sum = 0, counter = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum <= x){
            counter ++;
        }
        else{
            break;
        }
    }
    cout << counter << endl;
}