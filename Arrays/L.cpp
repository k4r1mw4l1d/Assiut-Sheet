#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i<n; i++){
            long long m = 0;
            for (int j = i; j<n; j++){
                m = max(m, arr[j]);
                cout << m << " ";
            }
        }
        cout << endl;
    }
    return 0;
}