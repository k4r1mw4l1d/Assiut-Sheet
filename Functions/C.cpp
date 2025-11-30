#include <iostream>
#include <algorithm>
using namespace std;

string getBinary(int n){
    string binary = "";
    while (n>0){
        if (n%2==0) binary.push_back('1');
        else binary.push_back('0');
        n/=2;
    }
    return binary;
}

bool isPalindrome(string txt){
    string rev = txt;
    reverse(txt.begin(), txt.end());
    return txt == rev;
}

int main(){
    int n;
    cin >> n;
    if (n%2!=0){
        string binary = getBinary(n);
        if (isPalindrome(binary)){
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "NO";
    }
}