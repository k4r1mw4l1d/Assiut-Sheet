#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    string S;
    cin >> S;

    if ((int)S.size() != A + B + 1) {
        cout << "No";
        return 0;
    }

    bool ok = true;
    for (int i = 0; i < S.size(); i++) {
        if (i == A) {  // A+1-th position in 1-indexed = index A in 0-indexed
            if (S[i] != '-') ok = false;
        } else {
            if (!isdigit(S[i])) ok = false;
        }
    }

    cout << (ok ? "Yes" : "No");
    return 0;
}
