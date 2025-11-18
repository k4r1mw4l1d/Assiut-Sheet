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

    int min = arr[0];
    int index = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] < min){
            min = arr[i];
            index = i;
        }
    }
    cout << min << " " << index + 1 << endl;

    return 0;
}