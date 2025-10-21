#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        long long n;
        cin >> n;
        int counter = 0;
        while (n>0){
            if (n%2==1){
                counter++;
            }
            n /= 2;
        }
        long long result = pow(2, counter) - 1;
        cout << result << endl;
    }
}