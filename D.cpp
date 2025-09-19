#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i<size; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }
    for (int i = 0; i<size; i++){
        if (arr[i] <= 10){
            cout << "A[" << i << "] = " << arr[i] << endl;
        }
    }

    return 0;
}
