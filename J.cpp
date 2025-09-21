#include <iostream>
#include <climits>
using namespace std;

int main (){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i<n; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }

    int min = INT_MAX;
    for (int i = 0; i<n; i++){
        if (arr[i] < min ){
            min = arr[i];
        }
    }
    
    int f = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] == min){
            f++;
        }
    }
    
    if (f % 2 != 0){
        cout << "Lucky";
    } else {
        cout << "Unlucky";
    }

    return 0;
}