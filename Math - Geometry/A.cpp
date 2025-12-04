#include <iostream>
#include <cmath>
using namespace std;

bool isPower(long long n){
    if (n<=0) return false;
    
    return (n & (n-1)) == 0;
}

int main(){
    long long n;
    cin >> n;

    if (isPower(n)){
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}