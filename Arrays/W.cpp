#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    long long arr[n][m], newArr[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            newArr[i][j] = arr[i][m-j-1];
        }
    }
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cout << newArr[i][j] << " ";
        }
        cout << endl;
    }
}