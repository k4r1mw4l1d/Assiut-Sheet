#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    for (auto &x : s){
        if (x==','){
            x = ' ';
        } else if (x >= 'a' && x <= 'z'){
            x -= 32;
        } else {
            x += 32;
        }
    }
    cout << s;
}