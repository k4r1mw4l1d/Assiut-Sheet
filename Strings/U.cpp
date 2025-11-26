#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();

    int e=0, g=0, y=0, p=0, t=0;
    for (int i = 0; i<n; i++){
        s[i] = tolower(s[i]);

        e+=(s[i] == 'e');
        g+=(s[i] == 'g');
        y+=(s[i] == 'y');
        p+=(s[i] == 'p');
        t+=(s[i] == 't');
    }
    cout << min(e, min(y, min(g, min(p, t))));
}