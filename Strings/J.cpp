#include <iostream>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;

    map<char, int> list;
    for (int i = 0; i<s.size(); i++){
        list[s[i]]++;
    }
    for (auto x : list){
        cout << x.first << " : " << x.second << endl;
    }
}