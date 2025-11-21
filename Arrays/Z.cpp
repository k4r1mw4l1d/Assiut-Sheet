#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n); 

    while (q--) {
        int x;
        cin >> x;
        if (binary_search(a, a + n, x))
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}