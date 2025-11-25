#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    string arr[100000]; 
    int index = 0;

    while (cin >> s) {
        reverse(s.begin(), s.end());
        arr[index] = s;
        index++;
    }

    for (int i = 0; i < index; i++) {
        cout << arr[i];
        if (i != index - 1) cout << " ";
    }
}
