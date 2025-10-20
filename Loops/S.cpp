#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long x, y;
        cin >> x >> y;
        int sum = 0;
        for (int i = min(x, y)+1; i<max(x, y); i++){
            if (i%2!=0){
                sum +=i;
            }
        }
        cout << sum << endl;
    }
}