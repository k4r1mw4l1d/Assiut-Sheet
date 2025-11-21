#include <iostream>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    long long arr[n];
    long long subarr[m];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i<m; i++){
        cin >> subarr[i];
    }
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (j < m && arr[i] == subarr[j]) {
            j++; 
        }
    }
    if (j == m){
        cout << "YES";
    } else {
        cout << "NO";
    }
}