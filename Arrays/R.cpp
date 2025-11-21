#include <iostream>
#include <algorithm>
using namespace std; 

int main(){
    int n;
    cin >> n;
    long long a[n], b[n];
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    for (int i = 0; i<n; i++){
        cin >> b[i];
    }
    bool p = true;
    sort(a, a+n);
    sort(b, b+n);
    for (int i = 0; i<n; i++){
        if (a[i] != b[i]){
            p = false;
            break;
        }
    }
    cout << (p ? "yes" : "no") << endl;
}