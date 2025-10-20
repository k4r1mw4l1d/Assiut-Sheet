#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x < 1000){
        x /= 100;
    } else {
        x /= 1000;
    }
    if (x%2==0){
        cout << "EVEN";
    } else {
        cout << "ODD";
    }
    return 0;
}