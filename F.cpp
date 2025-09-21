#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];

    for (int i = 0; i<size; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }

    int newArr[size];
    for (int i = 0; i<size; i++){
        newArr[i] = arr[size - i - 1];
    }
    for (int x : newArr){
        cout << x << " ";
    }

    return 0;
}