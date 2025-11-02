#include <iostream>
using namespace std;

int main(){
    long long T;
    cin >> T;
    while (T--){
        string s;
        cin >> s;
        int n = s.size();
        int sum = 0;
        if (s.size() > 10){
            for (int i = 1; i<s.size()-1; i++){
                sum++;
            }
            cout << s[0] << sum << s[n-1] << endl;
        } else {
            cout << s << endl;
        }
    }
}