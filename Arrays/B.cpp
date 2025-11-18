#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long arr[n];

    for (int i = 0; i<n; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }
    int index = -1;
    int num;
    cin >> num;
    for (int i = 0; i<n; i++){
        if (arr[i] == num){
            index = i;
            break;
        }
    }
    cout << index;
}