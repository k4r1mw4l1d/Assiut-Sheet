#include <iostream>
#include <climits> 
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        int arr[N];

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        
        int minVal = INT_MAX;
        
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) { 
                int a = arr[i] + arr[j] + (j - i);
                if (a < minVal) {
                    minVal = a;
                }
            }
        }

        cout << minVal << "\n";
    }

    return 0;
}
