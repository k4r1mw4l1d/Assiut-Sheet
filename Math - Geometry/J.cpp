#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N;
    cin >> N;

    bool first = true;
    long long n = N;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            if (!first) cout << "*";
            cout << "(" << i << "^" << count << ")";
            first = false;
        }
    }

    if (n > 1) { 
        if (!first) cout << "*";
        cout << "(" << n << "^1)";
    }

    return 0;
}