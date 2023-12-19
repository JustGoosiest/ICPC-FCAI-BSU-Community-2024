#include <iostream>
using namespace std;

int main(){
    int x, aa, bb, cc, a = 0, b = 0, c = 0; cin >> x >> aa >> bb >> cc;
    if(aa < x){
        a = aa;
    }
    if(bb < x){
        b = bb;
    }
    if(cc < x){
        c = cc;
    }
    if (a > b && a > c)
    {
        cout << 'A' << endl;
        return 0;
    }
    else if(b > c && b > a){
        cout << 'B' << endl;
        return 0;
    }
    else if(c > b && c > a){
        cout << 'C' << endl;
        return 0;
    }
    cout << -1 << endl;
}