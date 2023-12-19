#include <iostream>
using namespace std;

int main(){
    int year; cin >> year;
    while(true){
        year++;
        int first = year % 10;
        int second = (year / 10) % 10;
        int third = (year / 100) % 10;
        int fourth = (year / 1000) % 100;
        if(first != second && first != third && first != fourth && second != first && second != third && second != fourth && third != first && third != second && third != fourth && fourth != first && fourth != second && fourth != third){
            cout << year << endl;
            break;
        }
    }
}