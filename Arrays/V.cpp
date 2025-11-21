#include <iostream>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;
    long long arr[n];

    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    long long freq[m+1] = {};
    for (int i = 0; i<n; i++){
        freq[arr[i]]++;
    }
    for (int i = 1; i<=m; i++){
        cout << freq[i] << endl;
    }
}