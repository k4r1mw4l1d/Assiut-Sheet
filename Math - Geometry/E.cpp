#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long k = ( -1 + sqrt(1 + 8.0 * n) ) / 2;
 
    cout << k;
}