#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    char A[N][M];
    for (int i = 0; i<N; i++){
         for (int j = 0; j<M; j++){
            cin >> A[i][j];
        }
    }
    int X, Y;
    cin >> X >> Y;

    X--; 
    Y--;

    bool ok = true;

    if (X-1 >= 0)
        if (A[X-1][Y] != 'x') ok = false;

    if (X+1 < N)
        if (A[X+1][Y] != 'x') ok = false;

    if (Y-1 >= 0)
        if (A[X][Y-1] != 'x') ok = false;

    if (Y+1 < M)
        if (A[X][Y+1] != 'x') ok = false;

    if (X-1 >= 0 && Y-1 >= 0)
        if (A[X-1][Y-1] != 'x') ok = false;

    if (X-1 >= 0 && Y+1 < M)
        if (A[X-1][Y+1] != 'x') ok = false;

    if (X+1 < N && Y-1 >= 0)
        if (A[X+1][Y-1] != 'x') ok = false;

    if (X+1 < N && Y+1 < M)
        if (A[X+1][Y+1] != 'x') ok = false;

    if (ok) cout << "yes";
    else cout << "no";

    return 0;
}