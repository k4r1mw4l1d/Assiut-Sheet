#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    while (T--){
        string s;
        cin >> s;
        int n= s.size();
        bool okey = false;
        for (int i = 0; i<n-2; i++){
            if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'){
                cout << "Good" << endl;
                okey = true;
                break;
            }
            if (s[i] == '0' && s[i+1] == '1' && s[i+2] == '0'){
                cout << "Good" << endl;
                okey = true;
                break;
            }
        }
        if (!okey){
            cout << "Bad" << endl;
        }
    }
}