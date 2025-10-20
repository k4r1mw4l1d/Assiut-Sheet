#include <iostream>
#include <algorithm> // for max() and min()
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long maximum = max({a, b, c});
    long long minimum = min({a, b, c});

    cout << minimum << " " << maximum;
    return 0;
}