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
        if (i == A) {  
            if (S[i] != '-') ok = false;
        } else {
            if (!isdigit(S[i])) ok = false;
        }
    }

    cout << (ok ? "Yes" : "No");
    return 0;
}
