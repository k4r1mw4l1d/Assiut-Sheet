#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    string str = "hello";
    int index = 0;

    for (int i = 0; i<n && index < 5; i++){
        if (s[i] == str[index]){
            index++;
        }
    }
    if (index == 5){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}