#include <iostream>
using namespace std;

void swapRows(int A[][500], int n, int X, int Y){
    for (int j = 0; j < n; j++){
        swap(A[X][j], A[Y][j]);
    }
}

void swapCols(int A[][500], int n, int X, int Y){
    for (int i = 0; i < n; i++){
        swap(A[i][X], A[i][Y]);
    }
}

int main(){
    int n, X, Y;
    cin >> n >> X >> Y;

    X--; 
    Y--;

    static int A[500][500];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }

    swapRows(A, n, X, Y);
    swapCols(A, n, X, Y);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
