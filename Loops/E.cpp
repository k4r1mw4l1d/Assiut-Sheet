#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i<n; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }
    long long max = arr[0];
    for (int i = 0; i<n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << endl;
}