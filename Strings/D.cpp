#include <iostream>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    char tempa = a[0];
    char tempb = b[0];
    a[0] = tempb;
    b[0] = tempa;
    cout << a << " " << b << endl;
}