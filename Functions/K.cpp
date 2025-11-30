#include <iostream>
using namespace std;

void shiftRight(int n, long long arr[], int swaps){
    for (int i = n-swaps; i<n; i++){
        cout << arr[i] << " ";
    }
    for (int i = 0; i<n-swaps; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    long long n, x;
    cin >> n >> x;
    long long arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int swaps = x % n;
    shiftRight(n, arr, swaps);
}