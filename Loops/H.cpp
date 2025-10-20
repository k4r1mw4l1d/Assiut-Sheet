#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    bool isPrime = true;
    if (x <= 1) {
        isPrime = false; 
    } else {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        cout << "YES";
    } else {
        cout << "NO";
    }
}