#include <iostream>
#include <cmath>
using namespace std;

long long sequence(int x, int n){
    long long sum = 0;
    for (int i = 2; i<=n; i+=2){
        sum += (long long)pow(x, i);
    }
    return sum;
}

int main(){
    int x, n;
    cin >> x >> n;
    cout << sequence(x, n) << endl;
}