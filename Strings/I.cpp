#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    if(reversed == s){
        cout << "YES";
    } else {
        cout << "NO";
    }
}