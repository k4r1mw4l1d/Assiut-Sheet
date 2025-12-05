#include <iostream>
using namespace std;

int main(){
    int n, t;
    string s;
    cin >> n >> t >> s;

    for (int i=0; i<t; i++){
        for (int j = 0; j<n; j++){
            if (s[j]=='B' && s[j+1]=='G'){
                char temp1 = s[j];
                char temp2 = s[j+1];
                s[j] = temp2;
                s[j+1] = temp1;
                j++;
            }
        }
    }
    cout << s;
}