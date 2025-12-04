#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n){
    if (n <= 1) return false;
    if (n == 2) return true;
    if ((n & 1) == 0) return false;

    for (int i = 3; i<=sqrt(n); i++){
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    long long n;
    cin >> n;

    if (isPrime(n)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}