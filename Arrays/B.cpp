#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list;
    int size;
    cin >> size;

    for (int i = 0; i<size; i++){
        int number;
        cin >> number;
        list.push_back(number);
    }

    int number;
    cin >> number;
    int index = -1;
    for (int i = 0; i<size; i++){
        if (list[i] == number){
            index = i;
            break;
        }
    }
    cout << index;
    return 0;
}