#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long fib[50];
    fib[1] = 0;
    fib[2] = 1;

    for (int i = 3; i<=N; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout << fib[N];
    
    return 0;
}