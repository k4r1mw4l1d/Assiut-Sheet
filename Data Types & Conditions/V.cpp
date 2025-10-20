#include <iostream>
using namespace std;

int main(){
    long long a,b;
    string s;
    cin >> a >> s >> b;
    if (s == ">"){
        if (a>b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }if (s == "<"){
        if (a<b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }if (s == "="){
        if (a==b){
            cout << "Right";
        } else {
            cout << "Wrong";
        }
    }
}