#include <iostream>
using namespace std;

int main(){
    char A;
    cin >> A;
    if (A >= 65 && A <= 90){
        A = A + 32;
        cout << A;
    } else if(A >= 97 && A <= 122){
        A -= 32;
        cout << A;
    }
}