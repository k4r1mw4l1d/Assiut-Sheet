#include <iostream>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n >> s;
    int out = 0;
    for (int i = 0; i<n-1; i++){
        if (s[i] == s[i+1]){
            out++;
        }
    }
    cout << out;
}