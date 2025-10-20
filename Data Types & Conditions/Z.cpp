#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double a, b, c, d;
    cin >> a >> b >> c >> d;

    long double left = b * log(a);
    long double right = d * log(c);

    if (left > right)
        cout << "YES";
    else
        cout << "NO";
}