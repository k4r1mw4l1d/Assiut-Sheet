#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    if (x >= 65 && x <= 96){
        cout << "ALPHA\nIS CAPITAL";
    } else if (x >= 48 && x <= 64){
        cout << "IS DIGIT";
    } else if(x >= 97 && x <= 122){
        cout << "ALPHA\nIS SMALL";
    }
}