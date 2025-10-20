#include <iostream>
using namespace std;

int main(){
    long long T;
    cin >> T;
    while (T--){    
        long long n;
        cin >> n;
        long long fac = 1;
        for (int i = 1; i<=n; i++){
            fac *= i;
        }
        cout << fac << endl;
    }
}