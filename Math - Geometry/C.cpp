#include <iostream>
#include <algorithm>
using namespace std;

long long sumAll(long long a, long long b) {
    return (b * (b + 1) / 2) - ((a - 1) * a / 2);
}

long long sumEven(long long a, long long b) {
    if (a > b) return 0;

    long long start = (a % 2 == 0) ? a : a + 1;
    long long end   = (b % 2 == 0) ? b : b - 1;

    if (start > end) return 0;

    long long n = end / 2;
    long long m = start / 2;

    return 2 * ((n * (n + 1) / 2) - ((m - 1) * m / 2));
}

int main() {
    long long a, b;
    cin >> a >> b;

    cout << sumAll(min(a, b), max(a, b)) << endl;
    cout << sumEven(min(a, b), max(a, b)) << endl;
    cout << sumAll(min(a, b), max(a, b)) - sumEven(min(a,b), max(a, b)) << endl;

    return 0;
}