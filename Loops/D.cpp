#include <iostream>
using namespace std;

int main(){
    bool notCorrect = true;
    while (notCorrect){
        int number;
        cin >> number;
        if (number == 1999){
            cout << "Correct";
            notCorrect = false;
        } else {
            cout << "Wrong" << endl;
            continue;
        }
    }
}