#include <iostream>
using namespace std;

int main(){
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long l = max(l1, l2); 
    long long r = min(r1, r2); 

    if (l <= r) {
        cout << l << " " << r;
    } else {
        cout << -1;
    }

    return 0;
}