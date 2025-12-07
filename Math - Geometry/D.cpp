#include <iostream>
using namespace std;

int main(){
    int a, b, q;
    cin >> a >> b >> q;
    if (q % 3 == 1){
        cout << a;
    } else if (q % 3 == 2){
        cout << b;
    } else if (q % 3 == 0) {
        cout << (a^b) << endl;
    }
}