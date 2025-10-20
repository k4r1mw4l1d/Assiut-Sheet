#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    int arr[size];
    bool isPalindrome = true;

    for (long long i = 0; i<size; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }

    for (int i = 0; i<size/2; i++){
        if (arr[i] != arr[size-i-1]){
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome){
        cout << "YES";
    }else {
        cout << "NO";
    }

    return 0;
}