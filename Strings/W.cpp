#include <iostream>
using namespace std;

int main(){
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int Q;
    string s;
    cin >> Q >> s;

    if (Q==1){
        for (int i =0; i<s.size(); i++){
            for (int j = 0; j<original.size(); j++){
                if (s[i] == original[j]){
                    cout << key[j];
                }
            }
        }
    } else {
        for (int i =0; i<s.size(); i++){
            for (int j = 0; j<key.size(); j++){
                if (s[i] == key[j]){
                    cout << original[j];
                }
            }
        }
    }
}