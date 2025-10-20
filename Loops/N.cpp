#include <iostream>
using namespace std;

int main(){
    char s;
    int n;
    cin >> s >> n;
    int arr[n];
    for (int i = 0; i<n; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }
    for (auto x : arr){
        for (int i = 0; i<x; i++){
            cout << s;
        }
        cout << endl;
    }
}