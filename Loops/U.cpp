#include <iostream>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    int total = 0;

    for (int i = 1; i<=n; i++){
        int x = i;
        int sumDigits = 0;

        while (x>0){
            sumDigits += x%10;
            x /= 10;
        }
        if (sumDigits >= a && sumDigits <= b){
            total += i;
        }
    }
    cout << total;
}