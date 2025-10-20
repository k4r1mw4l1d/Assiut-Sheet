#include <iostream>
using namespace std;

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    for (int i = 1; i<=n; i++){
        if ((i%10)+(i%100)>=a && (i%10)+(i%100)<=b){
            sum += i;
        }
    }
    cout << sum;
}