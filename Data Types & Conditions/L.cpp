#include <iostream>
using namespace std;

int main() {
    string first1, last1, first2, last2;
    cin >> first1 >> last1 >> first2 >> last2;

    if (last1 == last2){
        cout << "ARE Brothers";
    }else {
        cout << "NOT";
    }
    return 0;
}