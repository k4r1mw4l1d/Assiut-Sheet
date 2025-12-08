#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long N;
    cin >> N;

    long long sum = 0;
    long long r = sqrt(N);

    for (long long i=1; i<=r; i++){
        if (N % i == 0){
            sum += i;
            long long other = N/i;
            if (other != i) sum += other;
        }
    }
    cout << sum;
}