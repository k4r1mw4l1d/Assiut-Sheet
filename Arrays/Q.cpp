#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    while (T--){
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        int num = 0;
        for (int i = 0; i<n; i++){
            num++;
            for (int j=i+1; j<n; j++){
                if(arr[j-1]<=arr[j]){
                    num++;
                } else {
                    break;
                }
            }
        }
        cout << num << endl;
    }
}