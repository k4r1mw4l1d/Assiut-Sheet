#include <iostream>
using namespace std;

bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int main() {
    string s;
    getline(cin, s);

    int words = 0;
    bool inWord = false;

    for (int i = 0; i < s.size(); i++) {
        if (isLetter(s[i])) {
            if (!inWord) {
                words++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << words;
}