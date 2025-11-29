#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();

    string egypt = "EGYPT";

    for (int i = 0; i<n; i++){
        int index = 0;
        int x = i;

        for (index = 0; index<5 && x<n; index++){
            if (s[x] != egypt[index])
            {
                break;
            }
            x++;
        }
        if (index == 5){
            cout << " ";
            i+=4;
        } else cout << s[i]; 
    }
}