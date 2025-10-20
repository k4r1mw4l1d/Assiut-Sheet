#include <iostream>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i<num-1; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long n;
    cin >> n;
    for (int i=2; i<n; i++)
    if (isPrime(i)){
        cout << i;
        if (i < n) cout << " "; 
    }
}