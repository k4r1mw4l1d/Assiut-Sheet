#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i<n; i++){
        int number;
        cin >> number;
        sum += number;
    }

    cout << abs(sum);
    return 0;
}