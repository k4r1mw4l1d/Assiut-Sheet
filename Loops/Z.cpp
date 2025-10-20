#include <iostream>
using namespace std;

int main(){
    long long s, k;
    cin >> k >> s;
    int testCase = 0;
    for (int x = 0; x<=k; x++){
        for (int y = 0; y<=k; y++){
            int z = s - x - y;
            if (z>=0 && z<=k){
                testCase++;
            }
        }
    }
    cout << testCase;
}