#include <iostream>
using namespace std;

int main(){
    long long x;
    cin >> x;
    int n = 0;
    while (x > 0) {
        if (x >= 5) {
            x -= 5;
        } else if (x >= 4) {
            x -= 4;
        } else if (x >= 3) {
            x -= 3;
        } else if (x >= 2) {
            x -= 2;
        } else if (x >= 1) {
            x -= 1;
        }
        n++;
    }
    cout << n;
}