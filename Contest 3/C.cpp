#include <iostream>
using namespace std;

int main(){
    long long T;
    cin >> T;
    while (T--){
        long long a, b;
        cin >> a >> b;
        if (a % b == 0)
            cout << 0 << endl;
        else
            cout << b - (a % b) << endl;
    }
}