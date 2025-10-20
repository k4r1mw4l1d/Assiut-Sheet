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

    int lowest;
    int index;
    for (int i = 0; i<size; i++){
        if (arr[i] < lowest){
            lowest = arr[i];
            index = i+1;
        }
    }

    cout << lowest << " " << index << endl;

    return 0;
}