#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int solved = 0;
    while (n--){
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> list = {a, b, c};
        int number = 0;
        for (auto x : list){
            if (x == 1){
                number ++;
            }
        }
        if (number >=2){
            solved++;
        }
    }
    cout << solved << endl; 
}