#include <iostream>
#include <cmath>
using namespace std;

int getMax(int A[], int N){
    int mx = A[0];
    for(int i = 1; i < N; i++){
        if(A[i] > mx)
            mx = A[i];
    }
    return mx;
}

int getMin(int A[], int N){
    int mn = A[0];
    for(int i = 1; i < N; i++){
        if(A[i] < mn)
            mn = A[i];
    }
    return mn;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << getMin(arr, n) << " " << getMax(arr, n) << endl;
}