#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;

    for (int i = 1; i <= n; i++) {
        if (i == 1)
            cout << a;
        else if (i == 2)
            cout << " " << b;
        else {
            int c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }
    cout << endl;
    return 0;
}