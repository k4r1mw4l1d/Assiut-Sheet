#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i<n; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }
    int minIndex;
    for (int i = 0; i<n-1; i++){
        minIndex = i;
        for (int j = i+1; j<n; j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    for (auto x : arr){
        cout << x << " ";
    }
    return 0;
}