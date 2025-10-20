#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    if (s.find(".") == string::npos){
        cout << "int " << s << endl;
    } else{
        int dotPos = s.find(".");
        string intPart = s.substr(0, dotPos);
        string floatPart = s.substr(dotPos);
        bool allZero = true;
        for (int i = 1; i < floatPart.size(); i++) {
            if (floatPart[i] != '0') {
                allZero = false;
                break;
            }
        }

        if (allZero) {
            cout << "int " << intPart;
        } else {
            cout << "float " << intPart << " 0" << floatPart;
        }
    }
}
