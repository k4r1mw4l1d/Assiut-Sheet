#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int minVal = INT_MAX;
        
        for (int i = 0; i<n; i++){
            for (int j = i+1; j<n; j++){
                long long a = arr[i] + arr[j] + (j-i);
                if (a<minVal){
                    minVal = a;
                }
            }
        }

        cout << minVal << "\n";
    }

    return 0;
}
