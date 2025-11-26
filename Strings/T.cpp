#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n = s.size();

    for (int i = 0; i<n; i++){
        if (s[i] == '?'){
            i++;
            while (i<n){
                if (s[i] == '=') 
                    cout << ": ";
                else if (s[i] == '&') 
                    cout << "\n";
                else 
                    cout << s[i];
                i++;
            }
            break;
        }
        
    }
}