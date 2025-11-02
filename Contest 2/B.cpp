#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    long long T;
    cin >> T;
    while (T--){
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> list = {a, b, c};
        sort(list.begin(), list.end());
        cout << list[1] << endl;

    }
}