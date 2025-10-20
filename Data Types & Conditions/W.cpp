#include <iostream>
using namespace std;

int main(){
    long long a,b,c;
    string s, q;
    cin >> a >> s >> b >> q >> c;
    if (s == "+"){
        if (a+b==c){
            cout << "Yes";
        } else {
            cout << a+b;
        }
    }if (s == "-"){
        if (a-b==c){
            cout << "Yes";
        } else {
            cout << a-b;
        }
    }if (s == "*"){
        if (a*b==c){
            cout << "Yes";
        } else {
            cout << a*b;
        }
    }
}