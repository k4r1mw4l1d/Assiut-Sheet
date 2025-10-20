#include <iostream>
using namespace std;

int main (){
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i<size; i++){
        int number;
        cin >> number;
        if (number > 0){
            arr[i] = 1;
        } else if (number < 0){
            arr[i] = 2;
        } else {
            arr[i] = 0;
        }
    }
    for (int x : arr){
        cout << x << " ";
    }
}