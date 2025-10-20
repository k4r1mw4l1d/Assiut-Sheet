#include <iostream>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    if (max(a,b)>min(a,b)){
        cout << "YES";
    } else {
        cout << "NO";
    }
}