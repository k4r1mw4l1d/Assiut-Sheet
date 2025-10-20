#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, d, p, n, m;
    cin >> x >> d >> p >> n >> m;

    int totalTime = (ceil((double)p / m)*n) + d;

    if (totalTime <= x)
        cout << "YES";
    else
        cout << "NO";
}