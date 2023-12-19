#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        int max = INT32_MAX, answer = 0;
        int boxes[n];
        for(int j = 0; j < n; j++){
            cin >> boxes[j];
        }
        for(int k = 0; k < n; k++){
            if(boxes[k] < max){
                max = boxes[k];
            }
        }
        for(int l = 0; l < n; l++){
            if(boxes[l] > max){
                answer += boxes[l] - max;
            }
        }
        cout << answer << endl;
    }
}