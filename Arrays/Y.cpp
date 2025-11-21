#include <iostream>
using namespace std;

int main(){
    long long n, q, l, r;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i<n; i++){
        arr[i] += arr[i-1];
    }
    while (q--){
        cin >> l >> r;
        l--, r--;
        if (l == 0) cout << arr[r] << endl;
        else cout << arr[r] - arr[l-1] << endl;
    }
}