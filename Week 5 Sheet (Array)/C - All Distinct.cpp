#include<iostream>
using namespace std;

int main() {
    int x; cin >> x;
    for (int i = 0; i < x; i++) {
        int n, count = 0, sum = 0;
        cin >> n;
        int array[n];
        int count1[100001] = {0};

        for (int j = 0; j < n; j++) {
            cin >> array[j];
        }

        for (int h = 0; h < n; h++) {
            count1[array[h]]++;
        }

        for (int p = 0; p < 100001; p++) {
            while (count1[p] > 1) {
                count1[p]--;
                count++;
            }
        }

        for (int e = 0; e < 100001; e++) {
            sum = sum + count1[e];
        }

        if (count % 2 == 0) {
            cout << sum << endl;
        } else {
            cout << sum - 1 << endl;
        }
    }
}