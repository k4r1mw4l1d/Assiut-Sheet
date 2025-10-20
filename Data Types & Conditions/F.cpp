#include<iostream>
using namespace std;

int main(){
    long long x, y;
    cin >> x >> y;
    int x1 = x % 10;
    int y1 = y % 10;
    cout << x1 + y1;
}