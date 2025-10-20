#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++){
        int number;
        cin >> number;
        arr[i] = number;
    }

    int max = 0;
    bool allEven = true;
    while (true){
        for (int i = 0; i < n; i++){
            if (arr[i] % 2 != 0){ 
                allEven = false; 
                break; 
            }
        }
        if (!allEven) break;
        
        for (int i = 0; i < n; i++){
            arr[i] /= 2;
        }
        max++;
    }
    cout << max;
    return 0;
}