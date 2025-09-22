#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string number;
    cin >> number;

    int sum = 0;
    for (int i = 0; i<number.size(); i++){
        sum += number[i];
    }
    cout << sum;
    return 0;
}