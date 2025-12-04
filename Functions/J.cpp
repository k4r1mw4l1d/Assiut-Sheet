#include <iostream>
#include <cstdio>
using namespace std;

double average(double arr[], int n){
    double sum = 0;
    for (int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum/n;
}

int main(){
    int n;
    cin >> n;
    double arr[n];

    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    printf("%.7lf", average(arr, n));
}