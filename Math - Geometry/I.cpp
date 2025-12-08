#include <iostream>
using namespace std;

int main() {
    long long A, B, X;
    cin >> A >> B >> X;

    if (A > B) swap(A, B); 

    long long L = A + (X - A % X) % X; 
    long long R = B - (B % X);         

    if (L > R) { 
        cout << 0;
        return 0;
    }

    long long n = (R - L) / X + 1;
    long long sum = n * (L + R) / 2;    

    cout << sum;
}