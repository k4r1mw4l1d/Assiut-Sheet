#include <iostream>
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

bool isPrime(int n){
    if(n < 2) return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int countPrimes(int A[], int N){
    int count = 0;
    for(int i = 0; i < N; i++){
        if(isPrime(A[i]))
            count++;
    }
    return count;
}

bool isPalindrome(int n){
    if(n < 0) return false;

    int original = n, reversed = 0;
    while(n > 0){
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return original == reversed;
}

int countPalindromes(int A[], int N){
    int count = 0;
    for(int i = 0; i < N; i++){
        if(isPalindrome(A[i]))
            count++;
    }
    return count;
}

int countDivisors(int n){
    if(n == 0) return 0;

    int divisors = 0;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            if(i * i == n)
                divisors++;
            else
                divisors += 2;
        }
    }
    return divisors;
}

int maxDivisorNumber(int A[], int N){
    int best = A[0];
    int maxDiv = countDivisors(A[0]);

    for(int i = 1; i < N; i++){
        int d = countDivisors(A[i]);

        if(d > maxDiv || (d == maxDiv && A[i] > best)){
            maxDiv = d;
            best = A[i];
        }
    }

    return best;
}

int main(){
    int N;
    cin >> N;

    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    cout << "The maximum number : " << getMax(A, N) << endl;
    cout << "The minimum number : " << getMin(A, N) << endl;
    cout << "The number of prime numbers : " << countPrimes(A, N) << endl;
    cout << "The number of palindrome numbers : " << countPalindromes(A, N) << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisorNumber(A, N) << endl;

    return 0;
}
