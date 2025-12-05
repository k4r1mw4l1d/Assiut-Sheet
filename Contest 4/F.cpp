#include <iostream>
#include <string>
using namespace std;

int main(){
    string n;
    cin >> n;
    
    if (n.size() == 1){
        cout << 0 << " ";
        return 0;
    }

    int counter = 0;

    while (n.size() > 1){
        long long sum = 0;

        for (char c : n){
            sum += (c - '0');
        }

        n = to_string(sum);
        counter++;
    }

    cout << counter << " ";
    return 0;
}