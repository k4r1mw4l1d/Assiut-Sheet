#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        long long a;
        cin >> a;
        cout << (a % 10) + (a / 10) << endl;

    }
}