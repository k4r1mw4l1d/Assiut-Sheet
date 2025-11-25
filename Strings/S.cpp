#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l = 0, r = 0, arr = 0;
    string f[1000];
    string ans = "";
    for (int i = 0; i<s.size(); i++){
        if (s[i] == 'L'){
            l++;
        } else{
            r++;
        }
        ans.push_back(s[i]);
        if (l == r){
            f[arr] = ans;
            ans = "";
            arr++;
            l = 0; r = 0;
        }
    }
    cout << arr << endl;
    for (int i = 0; i<arr; i++){
        cout << f[i] << endl;
    }
}