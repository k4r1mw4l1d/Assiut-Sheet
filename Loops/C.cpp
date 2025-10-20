#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long even = 0, odd = 0, positive = 0, negative = 0;

    for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        if (number > 0) {
            positive++;
        } else if (number < 0) {
            negative++;
        }

        if (number % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;

    return 0;
}
