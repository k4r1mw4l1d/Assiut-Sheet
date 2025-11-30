#include <iostream>
using namespace std;

void times(char x, int n){
    for (int i = 0; i<n; i++){
        cout << x << ((i<n-1) ? " " : "");
    }
    cout << endl;
}

int main(){
    int n;
    char x;
    int T;
    cin >> T;
    while (T--){
        cin >> n >> x;
        times(x, n);
    }
}