#include <iostream>
using namespace std;

int main(){
    long long a, b;
    int max = 0;
    cin >> a >> b;
    for (int i = 1; i<=min(a, b); i++){
        if (a%i==0 && i>max){
            if (b%i==0 && i>max){
                max = i;
            }
        }
    }
    cout << max;
}